#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    int h[101010];
    int p[101010] = {0};

    for(int i=1; i<=n; i++) {
        cin >> h[i];
    }

    int a, b, k;
    for(int i=1; i<=m; i++) {
        cin >> a >> b >> k;
        p[a] += k;
        p[b+1] -= k;
    }

    for(int i=1; i<=n; i++) {
        p[i] = p[i-1] + p[i];
    }

    for(int i=1; i<=n; i++) {
        cout << h[i] + p[i] << " ";
    }

    cout << "\n";
}