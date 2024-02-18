#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int m;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;
    vector<int> cardsQuantity(20000002);
    for(int i = 0; i < n; i++) {
        int cardNum;
        cin >> cardNum;

        cardsQuantity[cardNum + 10000000] += 1;
    }

    cin >> m;   // m 적힌 카드 몇개 가지고 있는지 찾기
    // vector<int> num(m);
    for(int i = 0; i < m; i++) {
        // cin >> num[i];
        int num;
        cin >> num;
        cout << cardsQuantity[num + 10000000] << " ";
    }

    cout << "\n";
}