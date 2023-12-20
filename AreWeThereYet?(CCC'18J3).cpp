// https://dmoj.ca/problem/ccc18j3

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> distances(4);

    for (int i = 0; i < 4; ++i) {
        cin >> distances[i];
    }

    vector<vector<int>> distanceToTheTable(5, vector<int>(5));

    for (int i = 0; i < 5; ++i) {
        int DistanceActuelle = 0;
        for (int j = i; j < 4; ++j) {
            DistanceActuelle += distances[j];
            distanceToTheTable[i][j + 1] = distanceToTheTable[j + 1][i] = DistanceActuelle;
        }
    }

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << distanceToTheTable[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
