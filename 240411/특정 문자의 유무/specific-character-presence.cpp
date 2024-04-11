#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string input;
    cin >> input;
    printf(input.find("ee") == string::npos ? "No " : "Yes ");
    printf(input.find("ab") == string::npos ? "No " : "Yes ");


    return 0;
}