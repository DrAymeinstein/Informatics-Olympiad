// https://arena.moi/problem/dplessonfibo

#include <iostream>
#include <vector>

using namespace std;

#define MOD 1000000007
#define MAX_N 1000000

vector<long long> fib(MAX_N + 1, -1);

long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    if (fib[n] != -1) {
        return fib[n];
    }
    fib[n] = (fibonacci(n - 1) + fibonacci(n - 2)) % MOD;
    return fib[n];
}


int main() {
    int T;
    cin >> T;

    for (int i = 0; i <= MAX_N; ++i) {
        fib[i] = -1;
    }

    fib[0] = 0;
    fib[1] = 1;

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;

        long long result = fibonacci(N);
        cout << result << endl;
    }

    return 0;
}
