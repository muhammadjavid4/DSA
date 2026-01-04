#include<iostream>
#include<vector>
using namespace std;

int f(int i,int t,int arr[],vector<vector<int>>&dp){
    if(t==0){return true;}
    if(i==0){return (arr[0]==t);}
    if(dp[i][t]!=-1){return dp[i][t];}
    bool nottake = f(i-1,t,arr,dp);
    bool take = false;
    if(arr[i]<=t){
        take = f(i-1,t-arr[i],arr,dp);
    }
    return dp[i][t] = take | nottake;
}

int main(){
    int arr[]={2,3,5,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=8;
    vector<vector<int>>dp(n,vector<int>(k+1,-1));
    cout<<f(n-1,k,arr,dp)<<endl;



    return 0;
}