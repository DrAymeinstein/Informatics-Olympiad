// https://arena.moi/problem/dplessoncoinchange

#include <iostream>

using namespace std;

const int MAX_N = 101;
const int MAX_K = 101;

int dp[1001][101];

int countWaysToMakeChange(int S, int K, int denominations[]) {
    for (int i = 0; i <= S; ++i) {
        for (int j = 0; j < K; ++j) {
            dp[i][j] = 0;
        }
    }

    for (int i = 0; i < K; ++i) {
        dp[0][i] = 1;
    }

    for (int i = 1; i <= S; ++i) {
        for (int j = 0; j < K; ++j) {
            int include{};
            int exclude{};

            if (i >= denominations[j]) {
                include = dp[i - denominations[j]][j];
            }

            if (j >= 1) {
                exclude = dp[i][j - 1];
            }

            dp[i][j] = (include + exclude) % 1000000007;
        }
    }

    return dp[S][K - 1];
}

int main() {
    int S, K;
    cin >> S >> K;

    int denominations[MAX_K];
    for (int i = 0; i < K; ++i) {
        cin >> denominations[i];
    }

    int ways = countWaysToMakeChange(S, K, denominations);
    cout << ways << endl;

    return 0;
}
