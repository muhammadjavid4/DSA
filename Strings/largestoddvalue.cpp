#include <iostream>
using namespace std;

int main() {
    string s = "1023045";

    string curr = "";
    string ans = "";

    for (int i = 0; i <= s.length(); i++) {

        if (i == s.length() || s[i] == '0') {

            // curr segment ke andar saare odd-ending substrings check
            for (int j = 0; j < curr.length(); j++) {

                string temp = curr.substr(j);
                int lastDigit = temp.back() - '0';

                if (lastDigit % 2 == 1) {
                    if (
                        temp.length() > ans.length() ||
                        (temp.length() == ans.length() && temp > ans)
                    ) {
                        ans = temp;
                    }
                }
            }

            curr = "";
        }
        else {
            curr += s[i];
        }
    }

    cout << ans << endl;
    return 0;
}
