#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    int max_size = 1010101;
    vector<bool> prime(max_size, true);
    prime[0] = prime[1] = false;

    for(int i = 2; i*i <= max_size; i++) {
        if(prime[i])
            for(int j = i*i; j <= max_size; j+=i) {
                prime[j] = false;
            }
    }

    while(1) {
        cin >> n;
        if(n == 0 || n <= 4 || n % 2) break;

        bool exist = false;

        for(int i = 3; i < n; i+=2) {
            if(prime[i] && prime[n-i]) {
                cout << n << " = " << i << " + " << n-i << "\n";
                exist = true;
                break;
            }
        }

        if(!exist)        
            cout << "Goldbach's conjecture is wrong." << '\n';
    }
}