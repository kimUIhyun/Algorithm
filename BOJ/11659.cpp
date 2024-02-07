#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;

    cin >> n >> m;

    int arr[101010];
    int p[101010] = {0};

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        p[i] = p[i-1] + arr[i];
    }

    int i, j;

    while(m--) {
        cin >> i >> j;
        cout << p[j] - p[i-1] << "\n";
    }
}