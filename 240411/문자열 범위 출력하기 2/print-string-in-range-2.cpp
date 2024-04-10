#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string x;
    int cnt;
    getline(cin, x);
    cin >> cnt;
    if(cnt >= x.length()) cnt = x.length();
    for(int i = 1; i <= cnt ; i++){
        cout << x[x.length() - i];
    }
    return 0;
}