// https://dmoj.ca/problem/ccc21j2

#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    string winner;
    int biggest_Bid = 0;

    for (int i = 0; i < N; ++i) {
        string name;
        int Bid;

        cin >> name; 
        cin >> Bid;

        if (Bid > biggest_Bid) {
            biggest_Bid = Bid;
            winner = name;
        }
    }

    cout << winner << endl;

    return 0;
}
