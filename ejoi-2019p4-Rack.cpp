// On this problem I only got 40/100 (sadly) and im still stuck on it:

// European Junior Olympiad in Informatics 2019
// Maribor, Slovenia, Day 1: rack

#include <iostream>
#define ll long long 

using namespace std;

const long int mod = 1000000007;

int pw2[1000005];

int pow2(int ll n, int ll k) {
    if (n == 0) {
        return 1;
    }
    if (k % 3 == 1) {
        return pow2(n - 1, k / 2 + 1);
    }
    else {
        return (pow2(n - 1, k / 2) + pw2[n - 1]) % mod;
    }
}

signed main() {
    int n;
    int k;

    cin >> n >> k;

    pw2[0] = 1;

    for (long long int i = 1; i <= n; i++) {
        pw2[i] = 2 * pw2[i - 1] % mod;
    }

    cout << pow2(n, k);

    return 0;
}
