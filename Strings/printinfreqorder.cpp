#include<iostream>
#include <unordered_map>

using namespace std;

int main(){
    string s = "banana";
    int n = s.length();
    unordered_map<char, int> freq;
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=0;j<n;j++){
            if(s[i] == s[j]){
                k++;
            }
        }
        if(freq.find(s[i]) == freq.end()){
            freq[s[i]] = k;
        }
    }

    vector<pair<char,int>>v;
    for(auto y:freq){
        v.push_back(y);
    }
 
    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        return a.second > b.second;   // DESC order
    });

    for(auto x:v){
        cout<<x.first<<" -> "<<x.second<<endl;
    }

    return 0;
}




// #include <iostream>
// #include <unordered_map>
// using namespace std;

// int main() {
//     string s = "muhammad";
//     unordered_map<char, int> freq;

//     for(char c : s) {
//         freq[c]++;   // 🔥 correct logic
//     }

//     for(auto x : freq) {
//         cout << x.first << " " << x.second << endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <unordered_map>
// #include <vector>
// #include <algorithm>
// using namespace std;

// string frequencySort(string s) {
//     unordered_map<char,int> freq;

//     // 1️⃣ Frequency count
//     for(char c : s){
//         freq[c]++;
//     }

//     // 2️⃣ Map → Vector
//     vector<pair<char,int>> v;
//     for(auto x : freq){
//         v.push_back(x);
//     }

//     // 3️⃣ Sort by frequency DESC
//     sort(v.begin(), v.end(), [](auto &a, auto &b){
//         return a.second > b.second;
//     });

//     // 4️⃣ Build result string
//     string ans = "";
//     for(auto x : v){
//         ans.append(x.second, x.first);
//     }

//     return ans;
// }

// int main() {
//     string s;
//     cin >> s;           // input string
//     cout << frequencySort(s);
//     return 0;
// }
