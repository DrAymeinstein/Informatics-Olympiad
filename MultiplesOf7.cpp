// https://arena.moi/problem/magj21lesmultiplesde

#include <iostream>
#include <unordered_map> // my fourth fav module (after iostream, string, vector)

using namespace std;

void seq(int N) {
    int* sequence = new int[N];
    for (int i = 0; i < N; ++i) {
        cin >> sequence[i];
    }

    int* prefixSum = new int[N + 1];
    prefixSum[0] = 0;
    for (int i = 1; i <= N; ++i) {
        prefixSum[i] = (prefixSum[i - 1] + sequence[i - 1]) % 7; // verif la divisibilité 
    }

    unordered_map<int, int> lastPosition;
    int maxLength = 0;

    for (int i = 0; i <= N; ++i) {
        if (lastPosition.find(prefixSum[i]) != lastPosition.end()) {
            maxLength = max(maxLength, i - lastPosition[prefixSum[i]]);
        }
        else {
            lastPosition[prefixSum[i]] = i;
        }
    }

    cout << maxLength << endl;

    delete[] sequence;
    delete[] prefixSum;

}

int main() {
    int N;
    cin >> N;

    seq(N);

    return 0;
}
