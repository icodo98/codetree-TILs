#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int age;
    cin >> age;
    int count = 0;
    double sum = 0;
    while(age / 10 == 2){
        count++;
        sum += age;
        cin >> age;
    }
    printf("%.2f", sum / count);

    return 0;
}