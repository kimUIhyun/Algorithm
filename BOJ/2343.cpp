#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<int> vedioes(n);
    vector<int> dp(n, 0);

    int l, r = 0;

    for(int i = 0; i < n; i++) {
        cin >> vedioes[i];
        r += vedioes[i];
    }

    // vedioes의 최댓값 (m이 최소 이정도는 돼야 모든 비디오가 들어감) ~ vedioes의 총 합 이분탐색 (한 블루레이에 다 넣는 경우)
    // 9 ~ 45

    l = *max_element(vedioes.begin(), vedioes.end());

    while(l <= r) {
        int mid = l + (r - l) / 2;
        int sum = 0, cnt = 0;

        for(int i =0; i < n; i++) {
            if(sum + vedioes[i] > mid) {
                sum = 0;
                cnt++;
            }

            sum += vedioes[i];
        }

        if(sum != 0) cnt++;

        if(cnt > m) l = mid + 1;
        else r = mid - 1;
    }

    cout << l << "\n";
    return 0;
}