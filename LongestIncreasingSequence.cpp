// https://arena.moi/problem/dplessonlis

#include <iostream>
#include <vector>

using namespace std;

int longestIncreasingSubsequence(const vector<int>& arr) {
	int N = arr.size();
	vector<int> lis(N, 1);

	for (int i = 1; i < N; ++i) {
		for (int j = 0; j < i; ++j) {
			if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
				lis[i] = lis[j] + 1;
			}
		}
	}

	int maxLenght = 0;
	for (int i = 1; i < N; ++i) {
		if (lis[i] > maxLenght) {
			maxLenght = lis[i];
		}
	}

	return maxLenght;
}

int main() {
	int N;
	cin >> N;

	vector<int> arr(N);
	for (int i = 0; i < N; ++i) {
		cin >> arr[i];
	}

	int result = longestIncreasingSubsequence(arr);

	cout << result << endl;
}
