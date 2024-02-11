#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int arr[n+1];

    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    sort(arr+1, arr+n+1);
    
    int min = 2000000000;
    int i = 1, j = n;
    int ans1, ans2;

    while(i < j) {
        int sum = arr[i] + arr[j];

        if(min > abs(sum)) {
            min = abs(sum);
            ans1 = arr[i];
            ans2 = arr[j];

            if(sum == 0)
                break;
        }

        if(sum < 0)
            i++;
        else
            j--;
    }
    
    cout << ans1 << " " << ans2 << "\n";
}