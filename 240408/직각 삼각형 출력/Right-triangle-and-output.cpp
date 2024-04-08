#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,temp;
    cin >> n;
    temp = 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 0; j < temp; j++){
            cout << "*";
        }
        cout << endl;
        temp += 2;
    }
    return 0;
}