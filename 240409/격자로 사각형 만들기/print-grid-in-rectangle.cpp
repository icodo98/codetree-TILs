#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int dp[n][n];
    fill(dp[0],dp[n],1);

    for(int i = 1; i < n ;i ++){
        for (int j = 1; j < n; j++){
            dp[i][j] = dp[i-1][j] + dp[i][j-1] + dp[i-1][j-1];
        }
    }

    for(int i = 0 ; i < n ;i ++){
        for(int j = 0 ; j < n ; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}