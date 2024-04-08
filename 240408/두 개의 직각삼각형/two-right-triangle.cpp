#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n ;
    cin >> n;
    int max = n;
    for(int i = n; i >0 ; i-- ){
        for(int j = 0; j < n; j ++){
            cout << "*";
        }
        for(int j = 0; j < max - n; j ++){
            cout << " ";
        }
        for(int j = 0; j < max - n; j ++){
            cout << " ";
        }
        for(int j = 0; j < n; j ++){
            cout << "*";
        }
        cout << endl;
        n--;
    }
    return 0;
}