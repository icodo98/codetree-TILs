#include <iostream>
#include <string>
using namespace std;
int main() {
    string a,b;
    string a_b, b_a;
    
    getline(cin, a);
    getline(cin, b);
    
    a_b = a + b;
    b_a = b + a;

    printf(a_b == b_a ? "true" : "false");



    return 0;
}