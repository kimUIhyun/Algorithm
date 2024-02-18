#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int m;

int lowerBound(vector<int> &v, int target) {
    int low = 0; int high = v.size();
    while(low < high) {
        int mid = low + (high - low) / 2;
        if(v[mid] >= target) {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }

    return low;
}

int upperBound(vector<int> &v, int target) {
    int low = 0; int high = v.size();
    while(low < high) {
        int mid = low + (high - low) / 2;
        if(v[mid] <= target) {
            low = mid + 1;
        }
        else {
            high = mid;
        }
    }

    return low;
}

int binarySearch(vector<int> &cards, int target) {
    return upperBound(cards, target) - lowerBound(cards, target);
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;
    vector<int> cards(n);
    for(int i = 0; i < n; i++) {
        cin >> cards[i];
    }
    sort(cards.begin(), cards.end());

    cin >> m;   // m 적힌 카드 몇개 가지고 있는지 찾기
    // vector<int> num(m);
    for(int i = 0; i < m; i++) {
        // cin >> num[i];
        int num;
        cin >> num;
        cout << binarySearch(cards, num) << " ";
    }

    cout << "\n";
}