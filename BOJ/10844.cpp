#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

#define mod 1000000000

using namespace std;


int n;
int res = 0;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n;
    int dp[101][10] = {0};

    for(int i = 1; i < 10; i++)
        dp[1][i] = 1;

    for(int i =2; i <= n; i++) {
        for (int j =0; j <10; j++) {
            if(j==0)
                dp[i][0] = dp[i-1][1];
            else if(j==9)
                dp[i][9] = dp[i-1][8];
            else
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1];

            dp[i][j] %= mod;
        }
    }

    // n 자리 끝이 9로 끝나는 가지수 -> n-1 자리 끝이 8로 끝나는 가지수
    // n 자리 끝이 8로 끝나는 가지수 -> n-1 자리 끝이 7로 끝나는 가지수 + 9로 끝나는 가지수
    // n 자리 끝이 7로 끝나는 가지수 -> n-1 자리 끝이 6로 끝나는 가지수 + 8로 끝나는 가지수
    // ...
    // n 자리 끝이 1로 끝나는 가지수 -> n-1 자리 끝이 0로 끝나는 가지수 + 2로 끝나는 가지수
    // n 자리 끝이 0로 끝나는 가지수 -> n-1 자리 끝이 1로 끝나는 가지수

    // dp[n][i] = dp[n-1][i-1] + dp[n-1][i+1]
    // dp[n][i] n자리 끝ㅇ이 i로 끝나는 경우의 가지수


    for(int i = 0; i < 10; i++) {
        res = res + dp[n][i];
        res %= mod;
    }
    
    cout << res << "\n";

    return 0;
}