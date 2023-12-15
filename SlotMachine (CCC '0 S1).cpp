// https://dmoj.ca/problem/ccc00s1
// NEVER GAMBLE !

#include <iostream>

using namespace std;

int main() {
    int quarters, machine1, machine2, machine3;
    cin >> quarters >> machine1 >> machine2 >> machine3;

    int plays = 0;
    int currentMachine = 1;

    while (quarters > 0) {
        if (currentMachine == 1) {
            quarters--;
            plays++;
            machine1++;
            if (machine1 == 35) {
                quarters += 30;
                machine1 = 0;
            }
        }
        else if (currentMachine == 2) {
            quarters--;
            plays++;
            machine2++;
            if (machine2 == 100) {
                quarters += 60;
                machine2 = 0;
            }
        }
        else {
            quarters--;
            plays++;
            machine3++;
            if (machine3 == 10) {
                quarters += 9;
                machine3 = 0;
            }
        }

        currentMachine = (currentMachine % 3) + 1;
    }

    cout << "Martha plays " << plays << " times before going broke." << std::endl;

    return 0;
}
