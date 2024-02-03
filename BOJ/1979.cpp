#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    int num[N];

    for(int i = 0; i < N; i++)
        cin >> num[i];

    int count = 0;


    for(int k = 0; k < N; k++) {
        if(num[k] < 2) continue;

        bool is_prime = true;

        for(int i = 2; i <= sqrt(num[k]); i++) {
            if(num[k] % i == 0) {
                is_prime = false;
                break;
            }
        }

        if(is_prime) {
            count++;
        }
    }

    cout << count << "\n";
}