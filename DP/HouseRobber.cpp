#include<iostream>
using namespace std;

int houserobber(int i,vector<int>&m,vector<int>&dp){
    if(i==0){return m[0];}
    if(i==1){
        return max(m[0],m[1]);
    }
    if(dp[i]!=-1){return dp[i];}

   return dp[i] = max(houserobber(i - 1, m, dp),houserobber(i - 2, m, dp) + m[i]);
}

int main(){
    vector<int>m = {2,7,9,3,1,4};
    vector<int>dp;
    int n = m.size();
    dp.assign(n+1,-1);
    cout<<houserobber(n-1,m,dp)<<endl;
    return 0;
}