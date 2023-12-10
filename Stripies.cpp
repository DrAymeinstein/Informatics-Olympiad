// https://acm.timus.ru/problem.aspx?space=1&num=1161

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> weights(n);
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
    }

    sort(weights.rbegin(), weights.rend()); // Descending Order

    double min_total_weight = weights[0];
    for (int i = 1; i < n; ++i) {
        min_total_weight = 2 * sqrt(min_total_weight * weights[i]);   // Mt = 2√(Mt * w_i)
    }

    cout << fixed << setprecision(2) << min_total_weight << endl;

    return 0;
}
