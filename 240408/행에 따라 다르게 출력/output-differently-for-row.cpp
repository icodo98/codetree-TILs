#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int increment = 0;
    int num = 0;
    for(int i = 1; i <=n ; i++){
        if(i % 2 == 1) increment = 1;
        else increment = 2;
        for(int j = 0; j < n ;j ++){
            num += increment;
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}