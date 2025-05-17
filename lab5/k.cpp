#include <iostream>
#include <algorithm>     //для сорт
#include <string>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());         //независимо от порядка
    sort(t.begin(), t.end());
    if(s == t){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}