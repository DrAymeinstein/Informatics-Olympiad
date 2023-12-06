// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

#include <iostream>
 
using namespace std;
 
int main() {
    char c;
    cin >> c;
 
    char nextChar = c + 1;
 
    if (c == 'z') {
        nextChar = 'a';
    } 
 
    cout << nextChar << endl;
 
    return 0;
}

// explanation:
// So here, we take the ASCII code and we add 1... 
// We get careful for z because ASCII(z) + 1 = ASCII({)
// So we make it if (c=='z') nextChar='a';