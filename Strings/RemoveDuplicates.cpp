#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s) {
    string result = "";

    for (int i = 0; i < s.length(); i++) {
        bool found = false;

        // check if s[i] already exists in result
        for (int j = 0; j < result.length(); j++) {
            if (s[i] == result[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            result += s[i];
        }
    }

    return result;
}

int main() {
    string s = "muhammad";
    cout << removeDuplicates(s) << endl;
}
