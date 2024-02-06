#include <iostream>

using namespace std;

int gcd(int x, int y) {
    if(y==0) return x;
    return gcd(y, x%y);
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    char colon;
    cin >> n >> ws >> colon >> m;   //std::ws 공백 문자 무시

    cout << n/gcd(n,m) << colon << m/gcd(n,m) << "\n";
}