#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int l, r;
    cin >> s >> l >> r;
    for(int i = l; i <= r; i++){
        cout << s[i];                   //чтобы вышло без пробелов нужно просто убрать  endl;
    }
    cout << endl;
    return 0;
}