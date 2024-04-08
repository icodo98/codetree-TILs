#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    for(int i = 2; i < 10 ; i += 2){
        for(int j = b; j >a; j--){
            printf("%d * %d = %d / ",j,i,j*i);
        }
        printf("%d * %d = %d\n",a,i,a*i);
    }
    return 0;
}