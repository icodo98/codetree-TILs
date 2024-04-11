#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(isupper(s[i])){
            s[i] = tolower(s[i]);
        } else{
            s[i] = toupper(s[i]);
        }
    }
    cout << s;
    return 0;
}