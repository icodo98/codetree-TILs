#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int s = n;
    for(int i = 0; i < n; i++){
        for(int j =s; j <= n; j++){
            cout << j << " ";
        }
        cout << endl;
        s--;
    }
    return 0;
}