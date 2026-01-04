#include<iostream>
#include<vector>
using namespace std;


int f(int i,int t,vector<int>&a,vector<vector<int>>&dp){
    // if(t==0){return 1;}
    if(i == 0){
        if(t == 0 && a[0] == 0) return 2;
        if(t == 0 || t == a[i]) return 1;
    }
    if(i==0){return a[i]==t;}
    if(dp[i][t]!=-1){
        return dp[i][t];
    }
    int nottake = f(i-1,t,a,dp);
    int take = 0;
    if(a[i]<=t){
        take = f(i-1,t-a[i],a,dp);
    }
    return dp[i][t] = take + nottake;
}

int main(){
    
    vector<int>a={0,0,1};
    int n = a.size();
    int target = 1;
    vector<vector<int>>dp(n,vector<int>(target+1,-1));
    cout<<f(n-1,target,a,dp)<<endl;

    return 0;
}