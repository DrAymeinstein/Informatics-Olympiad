// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

#include <iostream>
#include <iomanip> 
 
using namespace std;
 
int main() {
    int X;
    double P;
 
    cin >> X >> P;
 
    double originalPrice = P / (1 - X / 100.0);
 
    cout << fixed << setprecision(2) << originalPrice << endl;
 
    return 0;
}

// explanation : well kinda obvious
// O = P / (1 - X/100) 
// now we apply it