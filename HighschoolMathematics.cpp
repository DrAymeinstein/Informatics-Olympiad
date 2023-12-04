// https://arena.moi/problem/gc4highschoolmat

#include <iostream>
#include <vector>

using namespace std;

// We're going to use Euler's Totient function 
long long eulerTotient(long long n) {
    long long result = n;
    for (long long p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long n;
        cin >> n;

        long long result = eulerTotient(n);
        cout << result << endl;
    }

    return 0;
}
