#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    int h = 0;
    cin >> n >> m;

    vector<int> trees(n);
    for(int i = 0; i < n; i++) 
        cin >> trees[i];

    int low = 0;
    int high = *max_element(trees.begin(), trees.end());

    while(low <= high) {
        int mid = low + (high - low) / 2;
        long long sum = 0;
        for(int i = 0; i < trees.size(); i++) {
            if(trees[i] >= mid) sum += (trees[i] - mid);
            else sum += 0;
        }
        if(sum >= m) {
            // h = max(h, mid);
            h = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << h << "\n";
}