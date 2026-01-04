#include<iostream>
using namespace std;

int minsum(int i,int j,vector<vector<int>>&mat,vector<vector<int>>&dp){
    if(j<0 || j>=mat[0].size()){return 1e8;}
    if(i==0){return mat[0][j];}
    if(dp[i][j]!=-1){return dp[i][j];}

    int u = mat[i][j] + minsum(i-1,j,mat,dp);
    int ld = mat[i][j] + minsum(i-1,j-1,mat,dp);
    int rd = mat[i][j] + minsum(i-1,j+1,mat,dp);

    return dp[i][j] = min(u,min(ld,rd));
}

int main(){
    vector<vector<int>>mat={
        {2, 1, 3},
        {6, 5, 4},
        {7, 8, 9}
    };

    int m = mat.size();
    int n = mat[0].size();

    vector<vector<int>>dp(m,vector<int>(n,-1));
    int maxi = 1e8;
    for(int j=0;j<n;j++){
        maxi = min(maxi,minsum(n-1,j,mat,dp));
    }

    cout<<maxi<<endl;

    return 0;
}