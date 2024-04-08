#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int max = n;
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j < max; j++) printf("%d * %d = %d / ",i,j,i*j);
        printf("%d * %d = %d\n",i,max,i*max);
        max--;
    }
    return 0;
}