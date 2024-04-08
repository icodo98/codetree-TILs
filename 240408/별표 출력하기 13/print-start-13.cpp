#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int max = n;
    int min = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < max; j++) cout << "* ";
        cout << endl;
        for(int j = 0; j < min; j++) cout << "* ";
        cout << endl;
        min++;
        max--;
    }
    return 0;
}