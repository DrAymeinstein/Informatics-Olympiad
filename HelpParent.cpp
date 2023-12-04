// https://arena.moi/problem/ncc20help

#include <iostream>
#include <string>

using namespace std;

int N;
int M;
string word;

int main() {
    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> M;
        
        cin >> word;

        word.erase(M - 1, 1);

        cout << (i + 1) << " " << word << endl;
    }

    return 0;
}
