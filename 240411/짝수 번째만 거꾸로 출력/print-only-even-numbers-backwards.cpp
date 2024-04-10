#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    int x = s.length() - 1;
    if(x % 2 == 0) x--;
    for(int i = x; i >= 0 ; i -= 2){
        cout << s[i];
    }

    return 0;
}