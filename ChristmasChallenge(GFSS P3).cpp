// https://dmoj.ca/problem/gfsscc21p3
// GFSS Christmas Challenge P3 - Candy Distribution

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> candyDemands(N);

    for (int i = 0; i < N; ++i) {
        cin >> candyDemands[i];
    }

    sort(candyDemands.begin(), candyDemands.end());

    int satisfiedReindeer = 0;
    int remainingCandies = K;

    for (int i = 0; i < N; ++i) {
        if (remainingCandies >= candyDemands[i]) {
            ++satisfiedReindeer;
            remainingCandies -= candyDemands[i];
        }
        else {
            break;
        }
    }

    cout << satisfiedReindeer << endl;

    return 0;
}
