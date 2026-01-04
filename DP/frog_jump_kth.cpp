#include<iostream>
using namespace std;
vector<int>dp;

int frogJump(int i,int k,vector<int>&h,vector<int>&dp){
    if(i==0){return 0;}
    if(dp[i]!=-1){return dp[i];}
    int ans = INT_MAX;
    for(int j=1;j<=k;j++){
        if(i-j>=0){
            ans = min(ans,frogJump(i-j,k,h,dp) + abs(h[i]-h[i-j]));
        }
    }

    return dp[i] = ans;
}


int main(){
    vector<int>h = {10,30,10,40,60,20};
    int k=5;
    int n = h.size();
    dp.assign(n+1,-1);
    cout<<frogJump(n-1,k,h,dp)<<endl;
    return 0;
}