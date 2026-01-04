#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    int n = s.length();
    // string s1(n,' ');
    string s1 = "";
    for(int i=n-1;i>=0;i--){
        // s1[n-i-1] = s[i];
        s1 = s1 + s[i];
    }
    if(s1==s){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;

    }
    cout<<s1<<endl;
    return 0;
}