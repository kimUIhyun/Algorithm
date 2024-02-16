#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define HP 99

int n;
vector<int> cost;
vector<int> value;

int knapsack(int n) {
    vector<vector<int> > dp(n+1, vector<int>(HP+1, 0));

    for(int i =1; i <= n; i++) {
        for(int h = 1; h <= HP; h++) {
            if(cost[i-1] > h) {
                dp[i][h] = dp[i-1][h];
            }
            else {
                dp[i][h] = max(dp[i-1][h], dp[i-1][h-cost[i-1]] + value[i-1]);
            }
        }
    }

    return dp[n][HP];
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;

    cost.resize(n);
    value.resize(n);

    for(int i = 0; i < n; i++) cin >> cost[i];
    for(int i = 0; i < n; i++) cin >> value[i];

    cout << knapsack(n) << "\n";
    return 0;
}