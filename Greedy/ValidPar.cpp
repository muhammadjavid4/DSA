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

#include <iostream>
#include <string>
using namespace std;

bool f(string str, int idx, int cnt) {
    // Base Case 1: Agar count negative ho jaye (matlab ')' zyada ho gaye)
    if (cnt < 0) return false;

    // Base Case 2: Agar string khatam ho jaye
    if (idx == str.length()) {
        return (cnt == 0); // Agar balance 0 hai toh true
    }

    // Recursive Calls
    if (str[idx] == '(') {
        return f(str, idx + 1, cnt + 1);
    } 
    else if (str[idx] == ')') {
        return f(str, idx + 1, cnt - 1);
    } 
    else if (str[idx] == '*') {
        // '*' can be '(', ')', or empty ""
        return f(str, idx + 1, cnt + 1) ||  // Treat as '('
               f(str, idx + 1, cnt - 1) ||  // Treat as ')'
               f(str, idx + 1, cnt);      // Treat as empty
    }
    
    return false;
}

int main() {
    string str = "((*()"; // Example string
    if (f(str, 0, 0)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }
    return 0;
}