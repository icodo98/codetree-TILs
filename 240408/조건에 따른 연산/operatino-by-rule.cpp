#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;
    int n;
    cin >> n;
    while(n < 1000){
        if(n % 2 == 0){
            n *=3;
            n++;
        }
        else{
            n *= 2;
            n += 2;
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}