#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int temp,cnt;
    cnt = 0;
    for(int i = 0; i < 5 ;i ++){
        cin >> temp;
        if(temp % 2 == 0) cnt++;
    }
    cout << cnt;
    return 0;
}