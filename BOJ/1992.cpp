#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string quadTree(int x, int y, int size, vector<vector<char> > &QT) {
    char init = QT[x][y];
    for(int i = x; i < x + size; i++) {
        for(int j = y; j < y + size; j++) {
            if(QT[i][j] != init) {
                return "("
                    + quadTree(x, y, size / 2, QT)
                    + quadTree(x, y + size / 2, size / 2, QT)
                    + quadTree(x + size / 2, y, size / 2, QT)
                    + quadTree(x + size / 2, y + size / 2, size / 2, QT)
                    + ")";
            }
        }
    }

    return string(1, init);
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<vector<char> > QT(n, vector<char>(n, 0));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> QT[i][j];

    cout << quadTree(0, 0, n, QT) << "\n";
}