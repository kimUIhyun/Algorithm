#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(NULL);

    //A^2 = B^2 + N
    // 500 * 500 <<< 100,000,000 -> 1초 미만, 다 검사 가능

    int n;
    cin >> n;

    int ans = 0;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(i*i + n == j*j) ans++;

    cout << ans << "\n";
}