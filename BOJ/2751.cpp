#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    int num;
    vector<int> v;

    for(int i=0; i<N; i++) {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for(int i : v) cout << i << "\n";
}