#include <iostream>
#include <vector>

using namespace std;


int gcd(int x, int y) {
    if(y == 0) return x;
    return gcd(y, x % y);
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> numbers(n);

        for(int i = 0; i < n; i++) {
            cin >> numbers[i];
        }

        long long sum = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                sum += gcd(numbers[i], numbers[j]);
            }
        }

        cout << sum << '\n';
    }

    return 0;
}