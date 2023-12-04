// https://arena.moi/problem/ncc20hicham

#include <iostream>
#include <string>

using namespace std;

bool isAllowedDigit(int num, const string& allowedDigits) {
    while (num > 0) {
        int digit = num % 10;
        if (allowedDigits.find(to_string(digit)) == string::npos) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int countFactorsInRange(int X, int A, int B, const string& allowedDigits) {
    int count = 0;
    for (int i = A; i <= B; ++i) {
        if (i % X == 0 && isAllowedDigit(i, allowedDigits)) {
            ++count;
        }
    }
    return count;
}

int main() {
    int X, A, B; // all the numbers between A,B that are multiple of X
    cin >> X >> A >> B;

    string allowedDigits;
    cin >> allowedDigits;

    int result = countFactorsInRange(X, A, B, allowedDigits);

    cout << result << endl;

    return 0;
}
