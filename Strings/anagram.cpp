#include<iostream>
using namespace std;

int main(){

    string s1 = "anagram";
    string s2 = "nagaram";
    if(s1.length()!=s2.length()){
        cout<<"Not an anagram!"<<endl;
        return 0;
    }

    int freq[26] = {0};

    for(char c:s1){
        freq[c-'a']++;
    }
    for(char c:s2){
        freq[c-'a']--;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            cout<<"Not an anagram!"<<endl;
            return 0;
        }
    }
    cout<<"Anagram"<<endl;


    return 0;
}