#include<iostream>
using namespace std;

int main() {

    vector<string> strs = {"flower", "flow", "flight"};

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
