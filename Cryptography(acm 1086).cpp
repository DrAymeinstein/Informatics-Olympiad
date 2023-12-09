// https://acm.timus.ru/problem.aspx?space=1&num=1086
// I had problems with this problems because of TLE... the frustration when the Time Limit is 2s and you get 2.004s and get a TLE
// Anyways, I managed to solve it, we used Sieve of Eratosthenes' Algorithm, which is very good for prime detection, anyways here's the code:

#include <iostream>
#include <vector>

using namespace std;

vector<int> generatePrimes(int limit) {
    vector<bool> isPrime(limit + 1, true);
    vector<int> primes;

    for (int p = 2; p * p <= limit; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p) {
                isPrime[i] = false;
            }
        }
    }

    for (int p = 2; p <= limit; ++p) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }

    return primes;
}

int main() {
    const int limit = 1000000;  // Limit
    int k;
    cin >> k;

    vector<int> primes = generatePrimes(limit);

    for (int i = 0; i < k; ++i) {
        int n;
        cin >> n;

        if (n <= primes.size()) {
            cout << primes[n - 1] << endl;
        }
        else {
            return 1;
        }
    }

    return 0;
}
