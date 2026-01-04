#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "muhamamd javid pasha pasha   ";

    string ans = "";
    string cur = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            cur += s[i];
        }
        else if (!cur.empty()) {
            reverse(cur.begin(), cur.end());

            if (!ans.empty())
                ans += " ";

            ans += cur;
            cur = "";
        }
    }

    // last word handle
    if (!cur.empty()) {
        reverse(cur.begin(), cur.end());

        if (!ans.empty())
            ans += " ";

        ans += cur;
    }

    cout << ans << endl;

    return 0;
}
