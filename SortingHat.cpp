// https://acm.timus.ru/problem.aspx?space=1&num=1446

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int N;
    if (!(cin >> N)) {
        return 1;
    }

    cin.ignore(); 

    unordered_map<string, vector<string>> houses;

    for (int i = 0; i < N; ++i) {
        string name, house;

        if (!getline(cin, name) || !getline(cin, house)) {
            cerr << "Error: Unable to read name or house." << endl;
            return 1;
        }

        houses[house].push_back(name);
    }

    const string houseNames[] = { "Slytherin", "Hufflepuff", "Gryffindor", "Ravenclaw" };

    for (const string& house : houseNames) {
        cout << house << ":" << endl;
        for (const auto& student : houses[house]) {
            cout << student << endl;
        }
        cout << endl;
    }

    return 0;
}
