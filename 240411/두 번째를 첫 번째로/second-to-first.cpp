#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string input;
    cin >> input;
    char c = input[1];
    for(int i = 1; i < input.length();i++){
        if(input[i] == c) input[i] = input[0];
    }
    cout << input;
    return 0;
}