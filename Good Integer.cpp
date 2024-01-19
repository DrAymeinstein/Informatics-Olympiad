// https://atcoder.jp/contests/abc079/tasks/abc079_a

#include <iostream>
#include <string>

using namespace std;

bool Rep(string a) {
    if (a[0] == a[1] && a[1] == a[2] || a[1] == a[2] && a[2] == a[3]) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int N;
    cin >> N;

    string N_str = to_string(N);

    bool k = Rep(N_str);

    if (k == true) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
