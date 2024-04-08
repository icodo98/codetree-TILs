#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int dx = -1;
    int n;
    cin >> n;
    int arr[n][n];
    int x = n-1;
    int y = n-1;
    int num = 1;
    while(true){
        arr[x][y] = num++;
        x += dx;
        if(x < 0){
            y--;
            x = 0;
            dx *= -1;
        }
        if(x >= n){
            y--;
            x = n - 1;
            dx *= -1;
        }
        if(y < 0) break;
    }
    for(int i = 0; i< n; i++){
        for(int j = 0; j <n ;j ++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}