// https://arena.moi/problem/moi21qualwelcometomo

#include <iostream>

using namespace std;
int T;
int n;

int main() {
    cin >> T;

    for (int i = 0; i < T; ++i) {
        cin >> n;

        int teams = (n + 2) / 3;

        cout << teams << std::endl;
    }

    return 0;
}
