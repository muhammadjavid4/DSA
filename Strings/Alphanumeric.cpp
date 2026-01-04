#include<iostream>
using namespace std;

bool isNumericString(string s){
    for(char c : s){
        if(!isalnum(c)){
            return false;
        }
    }
    return true;
}

bool isPalindrome(string s){
    int left = 0;
    int right = s.length() - 1;

    while(left < right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}


int main(){
    

    string s;
    cin>>s;

    if(isNumericString(s) && isPalindrome(s)){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }


    return 0;
}