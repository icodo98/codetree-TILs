#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string input;
    string matcher;
    cin >> input >> matcher;
    int idx = (input.find(matcher) == string::npos) ? -1 : input.find(matcher);
    cout << idx;
    return 0;
}