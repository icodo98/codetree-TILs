#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    bool done = false;
    cin >> a>> b;
    for(int i = a; i <= b; i++){
        if(1920 % i == 0 && 2880 % i ==0) done = true;
        if(done) break;
    }
    printf(done ? "1" : "0");
    return 0;
}