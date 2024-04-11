#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin >> a >> b;
    string ans0, ans1;
    ans0 = "";
    ans1 = "";
    for(int i = 0; i < a.length(); i++){
        if(isalpha(a[i]) == 0) {
            ans0 += a[i];
        }
    }
    for(int i = 0; i < b.length(); i++){
        if(isalpha(b[i]) == 0) {
            ans1 += b[i];
        }
    }
    int n = stoi(ans0) + stoi(ans1);
    cout << n;
    return 0;
}