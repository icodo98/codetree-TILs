#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string A,B;
    cin >> A >> B;
    int cnt = 0;
    for(int i = 0; i < A.length(); i++) 
        if(A.substr(i,2) == B) cnt++;
    cout << cnt;
    return 0;
}