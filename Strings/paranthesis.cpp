#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "";
    int balance = 0; // (()())(())

    for (char ch : s) {
        if (ch == '(') {
            if (balance > 0)
                ans += ch;
            balance++;
        } 
        else {
            balance--;
            if (balance > 0)
                ans += ch;
        }
    }

    cout << ans << endl;
    
    return 0;
}
