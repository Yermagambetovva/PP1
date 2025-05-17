#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    if(n >= 1 && n <= 26){
        char uppercase = 'A' + (n - 1);
        char lowercase = 'a' + (n - 1);
        cout << uppercase << " " << lowercase << endl;
    } else {
        cout << "No such letter!" << endl;
    }
    return 0;
}