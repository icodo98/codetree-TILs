#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string input;
    cin >> input;
    input.erase(input.find("e"),1);
    cout << input;

    return 0;
}