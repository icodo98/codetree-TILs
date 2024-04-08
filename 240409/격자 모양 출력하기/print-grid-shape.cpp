#include <iostream>
#include <cstring>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    int board[n+1][n+1];
    memset(board,0,sizeof(board));
    for(int i = 0; i < m ;i ++){
        int x,y;
        cin >> x >> y;
        board[x][y] = x*y;
    }
    for(int i =1 ; i <= n ; i++){
        for(int j =1 ; j <= n; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}