#include <iostream>
#include <string>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    int count = 0;
    if(s == t){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}