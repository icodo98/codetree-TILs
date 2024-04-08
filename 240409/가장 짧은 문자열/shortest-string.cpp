#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    string s,t,d;
    cin >> s >> t >> d;
    int a, b, c;
    a = s.size();
    b = t.size();
    c = d.size();
    pair<int,int> mmax = minmax({a,b,c});
    cout << mmax.second - mmax.first;
    return 0;
}