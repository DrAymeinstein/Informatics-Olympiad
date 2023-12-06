// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E

#include <iostream>

using namespace std;

int main() {
    
    int a = 0, b = 0;
 
    cin >> a >> b;
 
    if (a == b || a - b == 1 || b - a == 1) {
        if (a == 0 && b == 0) {
            cout << "NO";
        }
        else {
            cout << "YES";
        }
    }
    else {
        cout << "NO";
    }
 
    return 0;
}

// Explanation : Just following the specifications in the Question.
// IF a==b (with a,b!=0) and |a-b|=1 OUTPUT "YES"
// A n y t h i n g   e l s e         OUTPUT "NO"