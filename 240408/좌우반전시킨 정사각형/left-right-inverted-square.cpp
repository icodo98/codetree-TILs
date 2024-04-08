#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        int max = n * i;
        for(int j = max; j > 0; j -= i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}