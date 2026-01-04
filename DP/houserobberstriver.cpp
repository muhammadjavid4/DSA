#include<iostream>
using namespace std;

int house(int i,vector<int>&m,vector<int>&dp){
    if(i == 0){return m[i];}
    if(i < 0){return 0;}
    if(dp[i]!=-1){return dp[i];}
    int pick = house(i-2,m,dp) + m[i];
    int notpick = house(i-1,m,dp) + 0;
    return dp[i] = max(pick,notpick);

}

int main(){
    vector<int>m = {2,7,9,3,1};
    vector<int>dp;
    int n = m.size();
    dp.assign(n+1,-1);
    cout<<house(n-1,m,dp)<<endl; 

    return 0;
}