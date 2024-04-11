#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string input;
    char c;
    cin >> input >> c;
    size_t idx = input.find(c);
    // cout << (idx == std::string::npos);
    printf(idx == string::npos ? "No" : "%d",idx);
    return 0;
}