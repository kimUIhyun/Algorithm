#include <iostream>

using namespace std;

int gcd(int x, int y) {
    if(y == 0) return x;
    return gcd(y, x % y);
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << "\n";

    cout << a / gcd(a, b) * b << "\n";
}