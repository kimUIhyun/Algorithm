#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> dp(n,1);

    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) {
        // 해당 원소까지의 부분 수열 중 가장 긴 길이 구하기
        // 해당 원소까지의 부분 수열 중 가장 긴 부분 수열에 해당 원소가 추가가 될 수 있나
        // 부분 수열을 계속 구하기 보단 길이를 저장 (DP, tabulation)
        // 점화식으로 dp 업데이트
        for(int j = 0; j < i; j++) {
            if(a[j] > a[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    cout << *max_element(dp.begin(), dp.end()) << "\n";

    return 0;
}