#include<iostream>
using namespace std;

int solve(int i, int j, int m, int n, vector<vector<int>>& dp) {
    // out of grid
    if (i >= m || j >= n)
        return 0;

    // destination reached
    if (i == m - 1 && j == n - 1)
        return 1;

    // already calculated
    if (dp[i][j] != -1)
        return dp[i][j];

    // move right + move down
    dp[i][j] = solve(i, j + 1, m, n, dp) +
               solve(i + 1, j, m, n, dp);

    return dp[i][j];
}

int uniquePaths(int m, int n) {
    vector<vector<int>> dp(m, vector<int>(n, -1));
    return solve(0, 0, m, n, dp);
}

int main() {
    int m = 4, n = 4;
    cout << uniquePaths(m, n)<<endl;
    return 0;
}
