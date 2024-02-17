// Given a string "abc" and assuming that each letter in the string has a value equal to its position in the alphabet,
//  our string will have a value of 1 + 2 + 3 = 6. This means that: a = 1b = 2c = 3 ....z = 26.

// You will be given a list of strings and your task will be to return the values of the strings as explained above multiplied
//  by the position of that string in the list. For our purposeposition begins with 1.

// nameValue ["abc","abc abc"] should return [6,24] because of [ 6 * 112 * 2 ]
// . Note how spaces are ignored.
#include <iostream>
#include <vector>

using namespace std;

vector<int> nameValue(string str[], int length) {
    vector<int> result(length);
    for (int i = 0; i < length; i++) {
        int value = 0;
        for (int j = 0; j < str[i].length(); j++) {
            char c = str[i][j];
            if (c >= 'a' && c <= 'z') {
                value += c - 'a' + 1;
            }
        }
        result[i] = value * (i + 1);
    }
    return result;
}

int main() {
    string str[] = {"abc", "abc abc"};
    int length = sizeof(str) / sizeof(str[0]);

    vector<int> result = nameValue(str, length);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
