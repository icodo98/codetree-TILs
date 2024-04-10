#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    int cnt = 1;
    char c = s[0];
    string ans;
    ans += s[0];
    for(int i = 1; i < s.length(); i++){
        if(c == s[i]) {
            cnt++;
        } else{
            ans += to_string(cnt);
            cnt = 1;
            c = s[i];
            ans += s[i];
        }
    }
    ans += to_string(cnt);
    cout << ans.length() << endl;
    cout << ans;
    
    return 0;
}