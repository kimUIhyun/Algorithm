#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, K;
    cin >> N >> K;
    
    vector<bool> isPrime(N+1, true);
    isPrime[0] = isPrime[1] = false;
    int count = 0, res = 0;

    for(int i = 2; i <= N; i++) {
            for(int j = i; j <= N; j+=i) 
            {
                if(isPrime[j]) { isPrime[j] = false; count++; }
                if(count == K) { res = j; break; }
            }
        if(count == K) break;
    }
    
    cout << res << '\n';
    
}