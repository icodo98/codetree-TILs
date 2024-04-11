#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    string cmd;
    cin >> A >> cmd;
    int r = 0;
    for(int i = 0; i < cmd.length(); i++){
        if(cmd[i] == 'L') r--;
        if(cmd[i] == 'R') r++;
    }
    int idx;
    for(int i = 0 ; i < A.length(); i++){
        idx = (i - r + A.length()) % A.length();
        cout << A[idx];
    }
    return 0;
}