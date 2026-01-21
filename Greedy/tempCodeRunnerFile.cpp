#include<iostream>
using namespace std;

bool f(string str,int idx,int cnt){
    int n = str.length();
    if(cnt<0){return false;}
    if(idx == n){return (cnt == 0);}
    if(str[idx] == '('){
        return f(str,idx+1,cnt+1);
    }
    if(str[idx] == ')'){
        return f(str,idx+1,cnt-1);
    }
    else if(str[idx] == '*') {f(str,idx+1,cnt+1) || f(str,idx+1,cnt-1) || f(str,idx+1,cnt);}
    return false;
}

int main(){
    string str = "((*()";
    int idx = 0;
    int cnt = 0;
    cout<<f(str,idx,cnt); 
    cout<<endl;



    return 0;
}