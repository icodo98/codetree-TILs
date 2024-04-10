#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    cin.ignore();
    getline(cin,s);
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ') continue;
        cout << s[i];
        if(++cnt == 5){
            cout << endl;
            cnt = 0;
        }
    }
    


    return 0;
}