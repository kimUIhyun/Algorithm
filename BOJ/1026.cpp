#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void setVector (vector<int> &vect, int length) {
    int num;
    for(int i = 0; i < length; i++) {
        cin >> num;
        vect.push_back(num);
    }
}



int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> A;
    vector<int> B;

    setVector (A, N);
    setVector (B, N);

    sort(A.begin(), A.end());   // A 오름차순
    sort(B.begin(), B.end(), greater<>());   // B 내림차순

    int res = 0;
    for(int i =0; i < N; i++) {
            res += A[i] * B[i];
    }

    cout << res;
}