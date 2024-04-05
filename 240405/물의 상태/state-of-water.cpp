#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin >> a;
    printf( a < 0 ? "ice" :
            a >= 100 ? "vapor":
                        "water");
    return 0;
}