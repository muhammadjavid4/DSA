#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int dp[n + 1]; // memoization array yaha per hotha hai store!
    dp[0] = 1; // 1 way to stay at the ground (do nothing)
    dp[1] = 1; // 1 way to reach the first step
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n] << endl; // Output the number of ways to reach the nth step just print krwa do
    return 0;
}