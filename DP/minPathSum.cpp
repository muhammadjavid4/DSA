#include<iostream>
using namespace std;

int f(int i,int j,vector<vector<int>>&a,vector<vector<int>>&dp) {
    if(i==0 && j==0){return a[0][0];}
    if(i<0 || j<0){return 1e9;}
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int up = a[i][j] + f(i-1,j,a,dp);
    int left  = a[i][j] + f(i,j-1,a,dp);
    return dp[i][j] = min(up,left);
}

int main() {
    int m=3;
    int n=3;
    vector<vector<int>>dp(m,vector<int>(n,-1));
    vector<vector<int>> a = {
    {1,2,3},
    {3,2,1},
    {1,2,3}
};

cout<<f(m-1,n-1,a,dp)<<endl;

    return 0;
}



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m = 3, n = 3;

    vector<vector<int>> a = {
        {1, 2, 3},
        {3, 2, 1},
        {1, 2, 3}
    };

    vector<vector<int>> dp(m, vector<int>(n, 0));

    // base case
    dp[0][0] = a[0][0];

    // first row
    for (int j = 1; j < n; j++) {
        dp[0][j] = a[0][j] + dp[0][j - 1];
    }

    // first column
    for (int i = 1; i < m; i++) {
        dp[i][0] = a[i][0] + dp[i - 1][0];
    }

    // rest of the grid
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = a[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    cout << dp[m - 1][n - 1] << endl;

    return 0;
}
