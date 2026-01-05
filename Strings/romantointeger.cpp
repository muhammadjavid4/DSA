#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s = "IV";

    unordered_map<char,int> mp = {
        {'I',1},{'V',5},{'X',10},{'L',50},
        {'C',100},{'D',500},{'M',1000}
    };

    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i + 1 < s.length() && mp[s[i]] < mp[s[i + 1]])
            ans -= mp[s[i]];
        else
            ans += mp[s[i]];
    }

    cout << ans << endl;

    // unordered_map<char,int>mapp = {
    //     {'a',2},{'b',3}
    // };
    // cout<<mapp['a']<<endl;
    return 0;
}
