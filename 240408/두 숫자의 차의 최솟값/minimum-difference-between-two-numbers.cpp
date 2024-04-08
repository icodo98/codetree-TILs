#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    int min = 1000000;
    for(int i = 0 ; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(min > abs(arr[i] - arr[j])) min = abs(arr[i] - arr[j]);
        }
    }
    cout << min;
    return 0;
}