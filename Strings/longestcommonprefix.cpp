// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int solve(vector<int>& num) {
//     sort(num.begin(), num.end());

//     int expected = 1;

//     for (int x : num) {
//         if (x < expected) continue;
//         if (x == expected) expected++;
//         else break;
//     }
//     return expected;
// }

// int main() {
//     vector<int> nums = {0, 2, 4, 8, 9, 111};
//     cout << solve(nums) << endl;
//     return 0;
// }












#include<iostream>
using namespace std;

int main() {

    vector<string> strs = {"flower", "flow", "flight"};
    // cout<<strs.size();
    // agar array empty ho
    if (strs.size() == 0) {
        cout << "";
        return 0;
    }

    // pehli string ko prefix maan lo
    string prefix = strs[0];

    // baaki strings se compare
    for (int i = 1; i < strs.size(); i++) {

        int j = 0;

        // character by character compare
        while (j < prefix.size() && j < strs[i].size()
               && prefix[j] == strs[i][j]) {
            j++;
        }
        // cout<<prefix.substr(0,j);
        // sirf matching part hi rakho
        prefix = prefix.substr(0, j);

        // agar prefix khali ho gaya
        if (prefix == "") {
            cout << "";
            return 0;
        }
    }

    // final answer
    cout << prefix << endl;

    return 0;
}
