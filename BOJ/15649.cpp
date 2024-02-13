#include <iostream>

using namespace std;

int n, m;
int arr[10];
int use[10];

void solve(int choose) {
    if(choose == m) {   // i에 대한 경우의 수 마다 다른 배열 생성됨
        for(int i =0; i < m; i++) cout << arr[i] << " ";
        cout << "\n";
        return;
    }
    for(int i = 1; i <= n; i++) {   // 모든 i에 대해서 경우의 수 생성
        int duplicate = 0;
        // for(int j = 0; j < choose; j++) if(arr[j] == i) duplicate = 1;  
        // arr의 기존 원소에 i가 있으면 duplicate = 1, use 배열 써서 최적화 가능
        if (!use[i]) {   // 기존 원소와 중복 되지 않으면
            use[i] = 1;
            arr[choose] = i;    // 배열 끝에 추가
            solve(choose + 1);  // 그 다음 자리 실행
            use[i] = 0; // 다음 i의 경우의 수를 위해 0으로 다시 초기화
        }
    }

}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> m;
    solve(0);
}