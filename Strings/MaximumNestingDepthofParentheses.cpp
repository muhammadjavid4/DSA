#include<iostream>
using namespace std;

int main(){
    
    string s = "((())(()))";
    int depth = 0;
    int maxdepth = 0;
    for(char c:s){
        if(c == '('){
            depth++;
            maxdepth = max(maxdepth,depth);
        }
        else if(c == ')'){
            depth--;
        }
    }

    cout<<maxdepth<<endl;


    return 0;
}