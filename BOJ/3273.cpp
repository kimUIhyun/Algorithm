#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, x;
    int arr[101010];

    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    sort(arr+1, arr+n+1);
    cin >> x;

    int ans = 0;

    for(int i=1, j=n; i <= n; i++) {
        while(j > 1 && arr[i] + arr[j] > x) j--;
        if(i >= j) break;
        if(arr[i] + arr[j] == x) ans++;
    }
 
    cout << ans << "\n";
    return 0;
}