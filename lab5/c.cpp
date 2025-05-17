#include <iostream>
#include <string>
#include <cstring>    //for char
using namespace std;
int main() {
    string s;
    cin >> s;
    char x;
    cin >> x;
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i<s.length(); i++){
        if(s[i] == x){
            count++;
        }
    }
    if(count == n){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}