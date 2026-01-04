#include<iostream>
using namespace std;

int main(){
    vector<int>m={2,7,9,3,1};
    int n = m.size();
    if(n==0){return 0;}
    if(n==1){return m[0];}
    int prev2 = m[0];
    int prev1 = max(m[0],m[1]);
    for(int i=2;i<n;i++){
        int cur = max(prev1,prev2+m[i]);
        prev2 = prev1;
        prev1 = cur;
    }
    cout<<prev1<<endl;
    return 0;
}