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

    for(int j = 0; j < n; j++) {
        int low = 0, high= l;
        int target;
        cin >> target;

        while(low <= high) {
            int mid = low + (high - low) / 2;   // 최소 조각의 길이 (가장 작은 조각의 길이)
            int prev = 0; int count = 0;

            for(int i = 0; i < m; i++) {
                if(s[i] - prev >= mid) {
                    prev = s[i];
                    count++;
                }
            }

            if(count == target && l - prev < mid)   // 다 잘랐는데 마지막 조각이 최소 조각 길이보다 작으면 실패
                count = target - 1;     // 무르고 다음 조건 찾기

            if(count < target)  // 최소 조각이 너무 커 다 못잘랐으면 더 작은 조각으로 시도
                high = mid - 1;
            else                // 성공했으면 더 큰 조각으로 더 찾아보기
                low = mid + 1;
        }

        cout << high << "\n";
    }
    
}