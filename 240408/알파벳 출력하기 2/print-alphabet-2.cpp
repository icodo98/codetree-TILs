#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    char c = 'A';
    char z = 'Z';
    int max = N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N - max; j ++) cout << "  ";
        for(int j = 0; j <max; j++){
            cout << c << " ";
            if(++c > z) c = 'A';
        }
        cout << endl;
        max--;
    }
    return 0;
}