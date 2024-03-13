#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int a, b, c;

    cin >> a >> b >> c;

    int x = (a+b)%c;
    int y = (a*b)%c;

    cout << x << "\n";
    cout << x << "\n";
    cout << y << "\n";
    cout << y << "\n";
}