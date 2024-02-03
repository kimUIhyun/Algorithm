#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    int numbers[N];
    int temp;

    for(int i=0; i<N; i++) {
        cin >> numbers[i];
    }

    for(int k=0; k<N; k++)
        for(int i=0; i<N-k-1; i++) {
            if(numbers[i] > numbers[i+1]) {
                temp = numbers[i+1];
                numbers[i+1] = numbers[i];
                numbers[i] = temp;
            }
        }

    for(int i : numbers) {
        cout << i << "\n";
    }
}