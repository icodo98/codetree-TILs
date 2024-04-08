#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    int arr1[n][m],arr2[n][m],arr3[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            cin >> arr1[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            cin >> arr2[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            printf("%d ",arr1[i][j] == arr2[i][j] ? 0 : 1);
        }
        cout << endl;
    }
    return 0;
}