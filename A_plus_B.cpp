// https://arena.moi/problem/aplusb
// easy problem.

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;

        int sum = a + b;
        cout << sum << endl;
    }

    return 0;
}
