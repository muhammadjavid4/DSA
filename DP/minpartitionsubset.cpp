#include<iostream>
#include<numeric>
using namespace std;

int solve(int ind,int sum,vector<int>&a,vector<vector<int>>&dp){
    if(sum==0){return true;}
    if(ind==0){return a[0]==sum;}
    if(dp[ind][sum]!=-1){
        return dp[ind][sum];
    }
    int nottake = solve(ind-1,sum,a,dp);
    int take = false;
    if(a[ind]<=sum){
        take = solve(ind-1,sum-a[ind],a,dp);
    }
    return dp[ind][sum] = take || nottake;
}

int main(){
    vector<int>a = {5,5,5,5};
    int n = a.size();
    int totalSum = accumulate(a.begin(), a.end(), 0);
    vector<vector<int>>dp(n,(vector<int>(totalSum+1,-1)));
    int minDiff = INT_MAX;
    for(int s=0;s<=totalSum/2;s++){
        if(solve(n-1,s,a,dp)){
            int diff = abs(totalSum - 2*s);
            minDiff = min(minDiff,diff);
        }
    }
    cout<<minDiff<<endl;
    return 0;
}