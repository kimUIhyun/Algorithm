#include <iostream>
#include <deque>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    deque<int> IntDeque;    

    int N, Action, X;
    cin >> N;

    while(N--) {
        cin >> Action;

        switch (Action) {
            case 1:
                cin >> X;
                IntDeque.push_front(X);
                break;
            case 2:
                cin >> X;
                IntDeque.push_back(X);
                break;
            case 3:
                if(IntDeque.empty())
                    cout << "-1" << "\n";
                else {
                    cout << IntDeque.front() << "\n";
                    IntDeque.pop_front();
                }
                break;
            case 4:
                if(IntDeque.empty()) 
                    cout << "-1" << "\n";
                else {
                    cout << IntDeque.back() << "\n";
                    IntDeque.pop_back();
                }
                break;
            case 5:
                cout << IntDeque.size() << "\n";
                break;
            case 6:
                if(IntDeque.empty()) {
                    cout << "1" << "\n";
                }
                else 
                    cout << "0" << "\n";
                break;      
            case 7:
                if(IntDeque.empty()) {
                    cout << "-1" << "\n"; 
                }
                else 
                    cout << IntDeque.front() << "\n";
                break;
            case 8:
                if(IntDeque.empty()) {
                    cout << "-1" << "\n"; 
                }
                else 
                    cout << IntDeque.back() << "\n";
                break;               
        }
    }

}