#include <iostream>
#include <string.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    int arr[n+1][n+1];
    int p[n+1][n+1];    // 누적합 배열 -> 동적 프로그래밍
    memset(p, 0, sizeof(p));

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) {
            cin >> arr[i][j];
            p[i][j] = p[i-1][j] + p[i][j-1] - p[i-1][j-1] + arr[i][j];
        }

    int x1, y1, x2, y2;
    for(int i = 1; i <= m; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << p[x2][y2] - p[x1-1][y2] - p[x2][y1-1] + p[x1-1][y1-1] << "\n";
    }
}