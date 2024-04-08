#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int blank = n-1;
    int star = 1;
    bool flag = false;
    for(int row = 0; row < 2*n-1; row ++){
        for(int i = 0; i < blank; i++) cout << " ";
        for(int i = 0; i < star ; i++) cout << "* ";
        if(!flag) blank--;
        else blank++;
        if(blank < 0) {
            blank = 1;
            flag = true;
        }
        if(!flag) star++;
        else star--;
        cout << endl;
    }
    return 0;
}