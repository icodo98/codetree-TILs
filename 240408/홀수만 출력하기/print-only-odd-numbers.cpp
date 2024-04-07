#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    int temp;
    for(int i = 0; i < N; i++){
        cin >> temp;
        if(temp % 3 == 0  && temp % 2 == 1) {
            cout << temp << endl;
        }
    }
    return 0;
}