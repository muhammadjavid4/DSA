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

