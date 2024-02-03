#include <iostream>
#include <stack>

using namespace std;

enum Action {X, PUSH, POP, SIZE, EMPTY, TOP};

int main() {
    cin.tie(NULL);  ios_base::sync_with_stdio(false);
    stack<int> IntStack;

    int N, action, a;
    cin >> N;
    
    for(int i = 0; i < N; i++) {
        cin >> action;
        switch (action)
        {
            case PUSH:
                cin >> a;
                IntStack.push(a);
                break;
            case POP:
                if(IntStack.empty())
                    cout << "-1" << "\n";
                else {
                    cout << IntStack.top() << "\n";
                    IntStack.pop();
                }
                break;
            case SIZE:
                cout << IntStack.size() << "\n";
                break;
            case EMPTY:
                if(IntStack.empty())
                    cout << "1" << "\n";
                else
                    cout << "0" << "\n";
                break;
            case TOP:
                if(IntStack.empty())
                    cout << "-1" << "\n";
                else {
                    cout << IntStack.top() << "\n";
                }
                break;
        }
    }
}