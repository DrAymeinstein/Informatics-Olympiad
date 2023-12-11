// https://open.kattis.com/problems/aliennumbers

#include <iostream>
#include <unordered_map>
#include <cmath>

using namespace std;

// This function takes a language string and creates a mapping of characters to their positions in the language
// This mapping is stored in an unordered map (source_mapping))
unordered_map<char, int> createMapping(const string& language) {
    unordered_map<char, int> mapping;
    for (int i = 0; i < language.size(); ++i) {
        mapping[language[i]] = i;
    }
    return mapping;
}
// Converts the given alien num to its decimal equivalent using the src language mapping.
// Iterates through each char in the alien number, calculates itss position using the source_mapping, and then accumulates the result using base conversion.
long long convertToDecimal(const string& alien_number, const unordered_map<char, int>& source_mapping) {
    long long result = 0;
    for (char digit : alien_number) {
        result = result * source_mapping.size() + source_mapping.at(digit);
    }
    return result;
}

// Converts a decimal value to the target language.
// Repeatedly divides the decimal value by the base of the target language and appends the remainder(converted to a character) to the result string.
string convertToTargetLanguage(long long decimal_value, const string& target_language) {
    string result;
    int base = target_language.size();
    while (decimal_value > 0) {
        result = target_language[decimal_value % base] + result;
        decimal_value /= base;
    }
    return result;
}

int main() {
    int T;
    cin >> T;

    for (int case_num = 1; case_num <= T; ++case_num) {
        int source_base;
        string alien_number, source_language, target_language;
        cin >> alien_number >> source_language >> target_language;

        unordered_map<char, int> source_mapping = createMapping(source_language);

        long long decimal_value = convertToDecimal(alien_number, source_mapping);

        string result = convertToTargetLanguage(decimal_value, target_language);

        cout << "Case #" << case_num << ": " << result << endl;
    }

    return 0;
}


// ALGORITHM WE USED:
// 1. CREATE MAPPING:
// For each test case, we create a mapping of characters to their positions in the src language. This mapping is stored in `source_mapping`.
// 2. CONVERT TO DECIMAL:
// Convert the given alieen number from the src language to its decimal equivalent. This is done by iterating through each character in the alien number, 
//   looking up its position in the source_mapping, and then accumelating the result using base convers.
// 3. CONVERT TO THE TARGET LANG (Or translation?):
// Convert the Decimal value obtained in (Step2) to the target language. This is achieved by repeatedly dividing the decimal value by the num base of the target 
//   language and appending the remainder (converted to a character) to the result string.
// 4. PRINT OUR RESULT
