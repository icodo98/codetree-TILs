#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string input;
    cin >> input;
    int ee = 0;
    int eb = 0;

    for(int i = 0; i < input.length() - 1; i++){
        ee = (input.substr(i,2) == "ee") ? ee + 1 : ee;
        eb = (input.substr(i,2) == "eb") ? eb + 1 : eb;
    }
    cout << ee << " " << eb;
    return 0;
}