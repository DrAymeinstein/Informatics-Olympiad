// https://arena.moi/problem/gc4azuzanagram

#include <iostream>
#include <algorithm>

using namespace std;
string str1, str2;
int N;

bool isAnagram(const string& str1, const string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    string sWord1 = str1;
    string sWord2 = str2;

    sort(sWord1.begin(), sWord1.end() - 1);
    sort(sWord2.begin(), sWord2.end() - 1);

    return sWord1 == sWord2;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) {
        
        cin >> str1 >> str2;

        if (isAnagram(str1, str2)) {
            cout << "Awesome anagram" << endl;
        }
        else {
            cout << "Azuz is not my leader" << endl;
        }
    }
    return 0;
}
