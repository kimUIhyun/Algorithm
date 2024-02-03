#include <iostream>
#include <stack>
#include <string>

using namespace std;

void Check(const string str) {
    stack<char> S;
    for(int i = 0; i < str.length(); i++) {
        if (str[i] == '(')
            S.push('(');
        else if (str[i] == ')') {
            if(S.empty()) {cout << "NO" << "\n"; return;}
            else S.pop();
        }
    }

    if(S.empty()) cout << "YES" << "\n";
    else cout << "NO" << "\n";

}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T;

    cin >> T;
    string ps;

    for(int i = 0; i < T; i++){
        cin >> ps;
        cin.ignore();
        Check(ps);
    }
}


