#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string ans = "";
    string input;
    for(int i = 0 ; i < n;i++){
        cin >> input;
        ans += input;
    }
    cout << ans;
    return 0;
}