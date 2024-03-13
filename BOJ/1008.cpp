#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int A, B;

    cin >> A >> B;

    double C = (double)A / B;

    cout << fixed;
    cout.precision(9);

    cout << C << "\n";
}