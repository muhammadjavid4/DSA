#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

string frequencySort(string s) {
    unordered_map<char,int> freq;

    // 1️⃣ Frequency count
    for(char c : s){
        freq[c]++;
    }

    // 2️⃣ Map → Vector
    vector<pair<char,int>> v;
    for(auto x : freq){
        v.push_back(x);
    }

    // 3️⃣ Sort by frequency DESC
    sort(v.begin(), v.end(), [](auto &a, auto &b){
        return a.second > b.second;
    });

    // 4️⃣ Build result string
    string ans = "";
    for(auto x : v){
        ans.append(x.second, x.first);
    }

    return ans;
}

int main() {
    string s;
    cin >> s;           // input string
    cout << frequencySort(s);
    return 0;
}