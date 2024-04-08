#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string str1,str2;

    while(!cin.eof()){
        cin >> str1;
        str2 += str1;
    }
    cout << str2;
    
    return 0;
}