// https://arena.moi/problem/moij2020acrobat

#include <iostream>
#include <vector>

using namespace std;

const long long mod = 1000000007;

int main() {
	long long l;
	long long t;

	cin >> t;

	while (t--) {
		cin >> l;

		long long int solution = (((l % mod) * ((l - 1) % mod)) / 2) % mod + 1;
		cout << solution << endl;
	}
}
