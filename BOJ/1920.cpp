#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int m;

bool binary_search(vector<int> &v, int target) {
    int start = 0;
    int end = v.size() - 1;

    while(start <= end) {
        int mid = (start + end) / 2;

        if (v[mid] == target) {
            return true;
        }   
        else if (v[mid] < target) {
            start = mid + 1;
        }   
        else {
            end = mid - 1;
        }
    }

    return false;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;
    vector<int> nv(n);
    for(int i = 0; i < n; i++) {
        cin >> nv[i];
    }

    sort(nv.begin(), nv.end());

    cin >> m;
    vector<int> mv(m);
    for(int i = 0; i < m; i++) {
        cin >> mv[i];
        cout << binary_search(nv, mv[i]) << "\n";
    }


}