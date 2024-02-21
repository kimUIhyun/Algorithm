#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countN1(int x, int y, int size, const vector<vector<int> > &arr) {
    int init = -1;
    int count = 0;
    for(int i = x; i < x + size; i++) {
        for(int j = y; j < y + size; j++) {
            if(arr[i][j] != init) {
                count++;
                return countN1(x, y, size / 3, arr)
                    + countN1(x, y + size / 3, size / 3, arr)
                    + countN1(x + size / 3, y, size / 3, arr)
                    + countN1(x + size / 3, y + size / 3, size / 3, arr);
            }
        }
    }

    return count;
}

int count0(int x, int y, int size, const vector<vector<int> > &arr) {
    int init = 0;
    int count = 0;
    for(int i = x; i < x + size; i++) {
        for(int j = y; j < y + size; j++) {
            if(arr[i][j] != init) {
                count++;
                return count0(x, y, size / 3, arr)
                    + count0(x, y + size / 3, size / 3, arr)
                    + count0(x + size / 3, y, size / 3, arr)
                    + count0(x + size / 3, y + size / 3, size / 3, arr);
            }
        }
    }

    return count;
}

int count1(int x, int y, int size, const vector<vector<int> > &arr) {
    int init = 1;
    int count = 0;
    for(int i = x; i < x + size; i++) {
        for(int j = y; j < y + size; j++) {
            if(arr[i][j] != init) {
                count++;
                return count1(x, y, size / 3, arr)
                    + count1(x, y + size / 3, size / 3, arr)
                    + count1(x + size / 3, y, size / 3, arr)
                    + count1(x + size / 3, y + size / 3, size / 3, arr);
            }
        }
    }

    return count;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<vector<int> > arr(n, vector<int>(n));

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];

    cout << countN1(0, 0, n, arr) <<  "\n";
    cout << count0(0, 0, n, arr) <<  "\n";
    cout << count1(0, 0, n, arr) <<  "\n";
}