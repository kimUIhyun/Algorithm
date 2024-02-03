#include <iostream>
#include <queue>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, K;
    cin >> N >> K;

    queue<int> Man;

    for(int i = 0; i < N; i++)
        Man.push(i+1);
    
    cout << "<";
    for(int i = 0; i < N-1; i++) {
        for(int j = 0; j < K-1; j++) {
            Man.push(Man.front());
            Man.pop();
        }
        cout << Man.front() << ", ";
        Man.pop();
    }
    cout << Man.front() << ">\n";
}