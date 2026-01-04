#include<iostream>
#include<vector>
#include<stdlib.h>

using namespace std;

vector<int>dp;

int frogJump(int n,vector<int>&h,vector<int>&dp){
    if(n==0){return 0;}
    if(dp[n]!=-1){return dp[n];}
    int jump1 = frogJump(n-1,h,dp) + abs(h[n] - h[n-1]);
    int jump2 = INT_MAX;
    if(n>1){
        jump2 = frogJump(n-2,h,dp) + abs(h[n] - h[n-2]);
    }
    return dp[n] = min(jump1,jump2);
}


int main(){

   vector<int>h = {10,30,10,40,60,20};
   int n = h.size();
   dp.assign(n+1,-1);
   cout<<frogJump(n-1,h,dp)<<endl;


    return 0;
}