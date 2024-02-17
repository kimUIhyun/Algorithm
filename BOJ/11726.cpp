#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    // 길이가 n인 경우의 수 배열 dp
    // 1 or 2 로 n을 만드는 경우의 수

//================================================================

    // dp[0] = 0, dp[1] = 1, dp[2] = 2
    // dp[3] 첫번째 가로 선택 -> dp[1] + 첫번째 세로 선택 -> dp[2] = 3
    // dp[4] 첫번째 가로 선택 -> dp[2] + 첫번째 세로 선택 -> dp[3] = 5
    // dp[5] 첫번째 가로 선택 -> dp[3] + 첫번째 세로 선택 -> dp[4] = 8
    // dp[n] = dp[n-2] + dp[n-1]

    // cout << result % 10007 << "\n"

    cin >> n;
    vector<int> dp(1001);

    dp[0] = 0; dp[1] = 1; dp[2] = 2;

    for(int i =3; i <= 1001; i++) {
        dp[i] = (dp[i-1] + dp[i-2]) % 10007;
    }

    cout << dp[n] << "\n";
}