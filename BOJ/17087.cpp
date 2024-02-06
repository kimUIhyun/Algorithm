#include <iostream>

using namespace std;

int gcd(int x, int y) {
    if(y == 0) return x;
    return gcd(y, x%y);
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, s;
    int gcd_temp = -1;
    cin >> n >> s;


    while(n--) {
        int a;
        cin >> a;
        int distance = abs(a-s);

        if(gcd_temp != -1)
            gcd_temp = gcd(distance, gcd_temp);
        else
            gcd_temp = distance;
    }

    cout << gcd_temp << "\n";

    return 0;
}