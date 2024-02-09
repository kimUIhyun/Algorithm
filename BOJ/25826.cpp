#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    int a[1010][1010];
    int p[1010][1010];


    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin >> a[i][j];

    int c, i1, j1, i2, j2, k;

    while(m--) {
        cin >> c;
        if(c == 1) {
            cin >> i1 >> j1 >> i2 >> j2 >> k;
            i1++; i2++; j1++; j2++;
            p[i1][j1] += k;
            p[i2+1][j2+1] += k;
            p[i1][j2+1] -= k;
            p[i2+1][j1] -= k;
        }
        else if(c == 2) {
            for(int i = 1; i <= n; i++) {
                for(int j = 2; j <= n; j++) {
                    p[i][j] = p[i][j-1] + p[i][j];
                }
            }
            for(int j = 1; j <= n; j++) {
                for(int i = 2; i <= n; i++) {
                    p[i][j] = p[i][j] + p[i-1][j];
                }
            }
            for(int i=1; i <= n; i++) {
                for(int j=1; j <= n; j++) {
                    a[i][j] += p[i][j];
                }
            }

            cin >> i1 >> j1 >> i2 >> j2;
            int sum=0;
            i1++; i2++; j1++; j2++;
            for(int i=i1; i <= i2; i++) {
                for(int j=j1; j <= j2; j++) {
                    sum += a[i][j];
                }
            }
            cout << sum <<'\n';
        }
    }
}