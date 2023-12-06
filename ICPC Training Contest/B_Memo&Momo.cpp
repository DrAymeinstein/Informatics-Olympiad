// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B

#include <iostream>
#include<cmath>
#include<iomanip>
 
using namespace std;
 
int main() {
	long long int a;
	long long int b;
	long long int k;
	cin >> a >> b >> k;
 
	if (a % k == 0 && b % k == 0) {
		cout << "Both" << endl;
		return 0;
	}
	if (a % k == 0 && b % k != 0) {
		cout << "Memo" << endl;
		return 0;
	}
	if (a % k != 0 && b % k == 0) {
		cout << "Momo" << endl;
		return 0;
	}
	else {
		cout << "No One" << endl;
		return 0;
	}
}

// explanation:
// if k|a  and k|b  OUTPUT "Both"
// if k|a  but k!|b OUTPUT "Memo"
// if k!|a and k|b  OUTPUT "Momo"
// if k!a  and k!b  OUTPUT "No One"
// it is very obvious aint it?