#include <iostream>
using namespace std;
int main(){
    char c;
    cin >> c;
    if(c >= 'A' && c <= 'Z'){
        c = c + ('a' - 'A');
    } else if(c >= 'a' && c <= 'z'){
        c = c - ('a' - 'A');
    }

    cout << c << endl;


    return 0;
}