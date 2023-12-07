// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

#include <iostream>

using namespace std;
 
int main() {
    long long int N;
    cin >> N;
 
    int tens = N / 10;
    int units = N % 10;
 
    // Check if units is not equal to 0 before performing division
    if (units != 0 && (tens % units == 0 || units % tens == 0)) {
        cout << "YES" << endl;
    } else if (units == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
    return 0;
}

// Explanation:
// For the line 10: 'int tens = N/10;' well int remains an int after division,
// 	and 0<=N<100 ===>  
// CHECK IF :
//		u!=0 and (EITHER t|u OR u|t) // if t|u&&u|t ===> u=t  : YES
//      u=0 											                                	  : YES
//      Anything else								                         		  : NO
