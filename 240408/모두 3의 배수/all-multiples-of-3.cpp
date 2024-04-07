#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int temp;
    bool done = true;
    for(int i = 0; i < 5; i++){
        cin >> temp;
        if(temp % 3 != 0) {
            done = false;
            break;
        }
    }
    printf(done ? "1" : "0");
    return 0;
}