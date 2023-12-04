// https://arena.moi/problem/gc4stablezeroing

#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long int n;
    cin >> n;

    vector<long int> arr(n);
    for (long long int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int nonZeroIndex = 0;
    for (long long int i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            swap(arr[i], arr[nonZeroIndex]);
            nonZeroIndex++;
        }
    }

    for (long long int i = 0; i < n; ++i) {
        cout << arr[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
