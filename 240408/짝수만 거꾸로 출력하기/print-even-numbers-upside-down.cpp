#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n ;
    cin >> n;
    int stack[n];
    int top = 0;
    int temp;
    for(int i = 0; i < n ;i ++){
        cin >> temp;
        if(temp % 2 == 0) stack[top++] = temp;
        
    }
    for(int i = top ; i > 0; i--){
        cout << stack[i-1] << " ";
    }
    return 0;
}