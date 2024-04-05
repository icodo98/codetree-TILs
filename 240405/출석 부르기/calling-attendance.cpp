#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    printf(n == 3 ?  "Paul" :
            n == 2 ? "Tom" :
            n == 1 ? "John" :
            "Vacancy");
    return 0;
}