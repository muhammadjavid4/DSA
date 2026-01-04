#include<iostream>
using namespace std;

int knapsack(int index,int capacity,vector<int>&weight,vector<int>&value,vector<vector<int>>&dp){
    if(index == 0){
        if(weight[0]<=capacity){
            return value[0];
        }
        else{
            return 0;
        }
    }
    if(dp[index][capacity]!=-1){
        return dp[index][capacity];
    }
    int include = INT_MIN;
    if(weight[index]<=capacity){
        include = value[index] + knapsack(index-1,capacity-weight[index],weight,value,dp);
    }
    int exclude = 0 + knapsack(index-1,capacity,weight,value,dp);
    dp[index][capacity] = max(include,exclude);
    return dp[index][capacity];
}

int main(){
    vector<int>weight={4,5,8,4,9,8};
    vector<int>values={1,7,5,3,8,2};
    int n=weight.size();
    int w=13;
    vector<vector<int>>dp(n,vector<int>(w+1,-1));
    cout<<knapsack(n-1,w,weight,values,dp)<<endl;

    return 0;
}