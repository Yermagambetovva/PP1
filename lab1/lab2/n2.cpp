#include <iostream>

using namespace std;

int main () {
    int number;
    cin >> number;

    int num1 = number/1000;
    int num2 = (number/100) % 10;
    int num3 = (number/10) % 10;
    int num4 = number % 10;

    if(num1==num4 && num3==num2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    

    return 0;
    
}
    