///////////////////////////////////////////
// 
// ██╗░█████╗░██╗  ██████╗░░█████╗░██████╗░░░███╗░░
// ██║██╔══██╗██║  ╚════██╗██╔══██╗╚════██╗░████║░░
// ██║██║░░██║██║  ░░███╔═╝██║░░██║░░███╔═╝██╔██║░░
// ██║██║░░██║██║  ██╔══╝░░██║░░██║██╔══╝░░╚═╝██║░░
// ██║╚█████╔╝██║  ███████╗╚█████╔╝███████╗███████╗
// ╚═╝░╚════╝░╚═╝  ╚══════╝░╚════╝░╚══════╝╚══════╝
// Day 2  -  Problem 1
//
///////////////////////////////////////////

#include <iostream>
#include <cmath>
 
using namespace std;
 
int n;
int cnt[100002][3];
int sum[100002][3][3];
 
void init(string a, string b) {
	n = (int)a.size();
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				sum[i][j][k] = sum[i - 1][j][k];
			}
		}
		for (int j = 0; j < 3; j++) {
			cnt[i][j] = cnt[i - 1][j];
		}
		sum[i][a[i - 1] == 'A' ? 0 : a[i - 1] == 'T' ? 1 : 2][b[i - 1] == 'A' ? 0 : b[i - 1] == 'T' ? 1 : 2]++;
		cnt[i][a[i - 1] == 'A' ? 0 : a[i - 1] == 'T' ? 1 : 2]++;
		cnt[i][b[i - 1] == 'A' ? 0 : b[i - 1] == 'T' ? 1 : 2]--;
	}
}
 
int get_distance(int x, int y) {
	x++, y++;
	int ans = 0;
	int c[3][3] = { {0} };
	for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) {
		c[i][j] = sum[y][i][j] - sum[x - 1][i][j];
	}
 
	if (cnt[y][0] != cnt[x - 1][0]) {
		return -1;
	}
	if (cnt[y][1] != cnt[x - 1][1]) {
		return -1;
	}
	if (cnt[y][2] != cnt[x - 1][2]) {
		return -1;
	}
 
	int tmp;
	tmp = min(c[0][1], c[1][0]);
	c[0][1] -= tmp, c[1][0] -= tmp, ans += tmp;
	tmp = min(c[0][2], c[2][0]);
	c[0][2] -= tmp, c[2][0] -= tmp, ans += tmp;
	tmp = min(c[2][1], c[1][2]);
	c[2][1] -= tmp, c[1][2] -= tmp, ans += tmp;
 
	ans += 2 * (c[0][1] + c[1][0]);
 
 
	return ans;
}
