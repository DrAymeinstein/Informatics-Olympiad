// https://arena.moi/problem/gc4lastdigit

// work hard not fast ;)

#include<iostream>
using namespace std;

int t;
int n;

int lastDigitOfFactorial() {
    switch (n) {
    case 0:
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
        return 6;
    case 4:
        return 4;
    default:
        return 0; // Car il y 2*5*n=10n == 0 (mod 10)
    }
}

int main() {
    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;
        cout << lastDigitOfFactorial() << endl;
    }
    return 0;
}
