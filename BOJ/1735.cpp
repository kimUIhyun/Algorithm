#include <iostream>
 
using namespace std;

int gcd(int x, int y) {
    if(y==0) return x;
    return gcd(y, x%y);
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    int a3 = (a1*b2) + (a2*b1);
    int b3 = b1*b2;

    cout << a3 / gcd(a3,b3) << " " << b3 / gcd(a3,b3) << "\n";
}