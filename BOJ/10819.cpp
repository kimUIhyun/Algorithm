#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> a(n);

    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());


    int ans = 0;
    do {
        int cur = 0;
        for(int i =1; i < n; i++) cur += abs(a[i] - a[i-1]);
        ans = max(ans, cur);
    } while(next_permutation(a.begin(), a.end()));


    cout << ans << "\n";
}