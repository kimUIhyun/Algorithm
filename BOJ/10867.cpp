#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> vect(N);

    int num;

    for (int i = 0; i < N; i++) {
        cin >> vect[i];
    }

    sort(vect.begin(), vect.end());

    for(int i = 0; i < N; i++) {
        int temp;
        if(temp == vect[i])
            continue;
        cout << vect[i] << " ";
        temp = vect[i];
    }

    cout << "\n";

}