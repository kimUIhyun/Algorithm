#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



// int bruteForce(int i, int weight) {
//     if(i == n) return 0;
//     int notTaken = bruteForce(i + 1, weight);
//     int taken = 0;
//     if (weight + w[i] <= k) taken = v[i] + bruteForce(i + 1, weight + w[i]);
//     return max(notTaken, taken);
// }

int knapsack(int n, int k, vector<int>& W, vector<int>& V) {
    vector<vector<int>> dp(n+1, vector<int>(k+1, 0));

    for(int i = 1; i <= n; i++) {
        for(int w = 1; w <= k; w++) {
            if(W[i-1] > w) {
                dp[i][w] = dp[i-1][w];
            }
            else {
                dp[i][w] = max(dp[i-1][w], dp[i-1][w-W[i-1]] + V[i-1]);
            }
        }
    }

    return dp[n][k];
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(NULL);

    int n, k;   // n: 물건 개수, k: 최대 무게
    cin >> n >> k;
    vector<int> w(n), v(n);
    for(int i = 0; i < n; i++) cin >> w[i] >> v[i];

    cout << knapsack(n, k, w, v) << "\n";
    // cout << bruteForce(0, 0) << "\n";
    return 0;
}