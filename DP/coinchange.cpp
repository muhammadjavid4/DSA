#include<iostream>
using namespace std;

int minCoins(int total, vector<int>& coin, vector<int>& dp) {
    if (total == 0)
        return 0;
    if (total < 0)
        return INT_MAX;

    if (dp[total] != -1)
        return dp[total];

    int mini = INT_MAX;

    for (int i = 0; i < coin.size(); i++) {
        int ans = minCoins(total - coin[i], coin, dp);
        if (ans != INT_MAX) {
            mini = min(mini, 1 + ans);
        }
    }

    return dp[total] = mini;
}

int main() {
    vector<int> coin = {3, 1, 5, 6, 2};
    int total = 11;

    vector<int> dp(total + 1, -1);

    int ans = minCoins(total, coin, dp);
    cout << ans << endl;

    return 0;
}
