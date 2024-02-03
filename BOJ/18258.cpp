#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    queue<int> IntQueue;

    int N;
    string Action;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> Action;
        if(Action.compare("push") == 0) {
            int x;
            cin >> x;
            IntQueue.push(x);
        }
        else if(Action.compare("pop") == 0) {
            if(IntQueue.empty())
                cout << "-1" << "\n";
            else {
                cout << IntQueue.front() << "\n";
                IntQueue.pop();
            }
        }
        else if(Action.compare("size") == 0) {
            cout << IntQueue.size() << "\n";
        }
        else if(Action.compare("empty") == 0) {
            if(IntQueue.empty())
                cout << "1" << "\n";
            else
                cout << "0" << "\n";
        }
        else if(Action.compare("front") == 0) {
            if(IntQueue.empty())
                cout << "-1" << "\n";
            else
                cout << IntQueue.front() << "\n";
        }
        else if(Action.compare("back") == 0) {
            if(IntQueue.empty())
                cout << "-1" << "\n";
            else 
                cout << IntQueue.back() << "\n";
        }
    }


    

}