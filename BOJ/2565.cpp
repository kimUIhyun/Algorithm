#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

int lis(vector<int> &v) {
    vector<int> dp(n,1);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++){
            if(v[j] < v[i])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;

    // a, b 모두 오름차순이거나 내림차순이어야 함
    // vector<int> a(500) 의 원소로 b의 번호
    // 1 2 3 4 5 6 7 8 9 10
    // 8 2 9 1 0 4 6 0 7 10
    // a 0이 아닌 원소들 중 lis(a)

    vector<int> a(500,0);
    vector<int> cables;
    int cableNum;
    for(int i = 0; i < n; i++) cin >> cableNum >> a[cableNum];
    for(int i = 0; i < a.size(); i++) if(a[i] != 0) cables.push_back(a[i]);

    cout << n - lis(cables) << "\n";

    return 0;
}