#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m, l;
    cin >> n >> m >> l;

    vector<int> s(m);
    for(int &i : s) 
        cin >> i;

    int low = l, high;
    for(int i = 0; i < m - 1; i++) {
        low = min(s[i+1] - s[i], low);
        high = max(s[i+1] - s[i], high);
    }

    for(int i = 0; i < n; i++) {
        int cut;
        cin >> cut;

        while(low <= high) {
            
        }
    }
    
}