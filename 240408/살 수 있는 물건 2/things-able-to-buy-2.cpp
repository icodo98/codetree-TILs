#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    printf(n >= 3000 ? "book" :
            n >= 1000 ? "mask" :
                n >= 500 ? "pen" :
                    "no");



    return 0;
}