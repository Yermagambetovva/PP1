#include <iostream>
using namespace std;
void toUpper(char a){
    cout << char(toupper(a)) << endl;
}
int main(){
    char a;
    cin >> a;
    toUpper(a);
    return 0;
}