#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string str[n];
    int cnt = 0;
    int sum = 0;
    char s;
    for(int i = 0 ; i < n ; i++){
        cin >> str[i];
    }
    cin >> s;
    for(int i = 0 ; i < n ; i++){
        if(str[i][0] == s) {
            sum += str[i].size();
            cnt++;
        }
    }
    printf("%d %.2f", cnt, (double) sum/cnt);
    return 0;
}