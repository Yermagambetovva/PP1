#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    int l, r;
    cin >> s >> l >> r;
    cout << s.substr(l, r-l + 1) << endl;
    return 0;
}