// https://dmoj.ca/problem/ccc16j3

#include <iostream>
#include <algorithm>

using namespace std;

int longestPalindromeLength(const string& word) {
    int maxLength = 1;

    for (int center = 0; center < 2 * word.length() - 1; ++center) {
        int left = center / 2;
        int right = left + center % 2;

        while (left >= 0 && right < word.length() && word[left] == word[right]) {
            int palindromeLength = right - left + 1;
            maxLength = max(maxLength, palindromeLength);

            --left;
            ++right;
        }
    }

    return maxLength;
}

int main() {
    string word;
    cin >> word;

    int result = longestPalindromeLength(word);

    cout << result << endl;

    return 0;
}
