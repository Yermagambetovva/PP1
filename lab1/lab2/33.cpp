#include <iostream>
using namespace std;
int main(){
    char c;
    int sum = 0;

    while(cin.get(c) && c !='\n'){
        sum += int(c);
    }

    cout << sum << endl;
    return 0;
}