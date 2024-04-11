#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    cin >> c;
    if(--c < 'a') c = 'z';
    cout << c;
    return 0;
}