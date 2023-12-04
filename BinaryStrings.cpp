// https://arena.moi/problem/round6binary

#include <iostream>
#include <string>

using namespace std;

string s;
int i = 0;

int main() {
    cin >> s;

    int length = s.length();

    while (i < length - 1) {
        if (s[i] != s[i + 1]) {
            s.erase(i, 2);

            length -= 2;

            if (i > 0) {
                i--;
            }
        }
        else {
            i++;
        }
    }

    cout << length << endl;

    return 0;
}
