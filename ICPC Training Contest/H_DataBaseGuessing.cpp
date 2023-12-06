// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    double result = (n1 * n2) / n3;
    if (floor(result) == result) {
        cout << "double" << endl;
    } else if (result <= 2147483647 && result > 0 && floor(result) == result) {
        cout << "int" << endl;
    } else {
        cout << "long long" << endl;
    }

    return 0;
}

// Explanation:
// This problem is very easy, we check if a|nk, if yes, well, it is either int or ll, so we check
// then if anything else, it is therefore a "double" type