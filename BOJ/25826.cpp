#include <iostream>
#include <string.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    int a[1001][1001];
    int p[1001][1001];
    

    int b[m];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> a[i][j];

    int c, i1, j1, i2, j2, k;

    while(m--) {
        cin >> c;
        if(c == 1) {
            cin >> i1 >> j1 >> i2 >> j2 >> k;
            memset(p, 0, sizeof(p));
            p[i1][j1] += k;
            p[i2+1][j2+1] += k;
            p[i1][j2+1] -= k;
            p[i2+1][j1] -= k;
            for(int j = j1+1; j <= j2+1; j++) {
                p[i1][j] = p[i1][j-1] + p[i1][j];
                p[i2+1][j] = p[i2+1][j-1] + p[i2+1][j];
            }
            for(int j = j1; j <= j2+1; j++) {
                for(int i = i1+1; i <= i2+1; i++) {
                    p[i][j] = p[i][j] + p[i-1][j];
                }
            }
            for(int i=i1; i <= i2; i++) {
                for(int j=j1; j <= j2; j++) {
                    a[i][j] += p[i][j];
                }
            }
        }
        else if(c == 2) {
            cin >> i1 >> j1 >> i2 >> j2;
            int sum=0;
            for(int i=i1; i <= i2; i++) {
                for(int j=j1; j <= j2; j++) {
                    sum += a[i][j];
                }
            }
            cout << sum <<'\n';
        }
    }
}