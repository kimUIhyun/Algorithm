#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int k;
int n;

bool can_make_cables(const vector<long long> &cableLengths, int target, long long length) {
    long long count = 0;
    for(long long cable : cableLengths) {
        count += cable / length;
        if(count >= target) return true;
    }
    return count >= target;
}  

int binary_search_max_length(const vector<long long> &cableLengths, int target) {
    long long low = 1;
    long long high = *max_element(cableLengths.begin(), cableLengths.end());
    long long maxLength = 0;

    while(low <= high) {
        long long mid = low + (high - low) / 2;
        if(can_make_cables(cableLengths, target, mid)) {
            maxLength = mid;
            low = mid + 1;      // 자를 수 있으면 더 긴 길이로 시도
        }
        else {
            high = mid - 1;     // 자를 수 없으면 더 짧은 길이로 시도
        }
    }

    return maxLength;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    // 각각 길이가 다른 선 k개
    // 같은 길이로 n개 만들기 (초과 포함)
    // 각 선의 최대 길이 구하기
    // 이 길이로 n개의 선을 만들 수 있는가? y/n
    // k <= n

    cin >> k >> n;
    vector<long long> cableLengths(k); 
    for(int i = 0; i < k; i++)  cin >> cableLengths[i];

    long long maxLength = binary_search_max_length(cableLengths, n);
    cout << maxLength << endl;

    return 0;


}
