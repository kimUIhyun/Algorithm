#include <iostream>
#include <algorithm>

using namespace std;

//합을 누하는데 제한시간이 짧으므로 누적합 배열로 합 검사
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, s;
    int arr[101010];
    int p[101010];

    cin >> n >> s;
    for(int i=1; i<=n; i++) cin >> arr[i];
    for(int i=1; i<=n; i++) p[i] = arr[i] + p[i-1];

    int ans = 10101010;
    for(int i=1, j=1; i<=n; i++) {
        while(j < n && p[j] - p[i-1] < s) j++;
        if(p[j] - p[i-1] >= s) ans = min(ans, j-i+1);
    }

    if(ans == 10101010) cout << 0 << "\n";
    else cout << ans << "\n";

}