#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int M, N;
    cin >> M >> N;
    vector<int> prime(N+1, true);
    prime[0] = prime[1] = false;

    for(int i = 2; i*i <= N; i++) {
        if(prime[i]) {
            for (int j = i*i; j <= N; j += i)
                prime[j] = false;
        }
    }

    for(int i = M; i <= N; i++) {
        if(prime[i]) {
            cout << i << '\n';
        }
    }

    return 0;
}