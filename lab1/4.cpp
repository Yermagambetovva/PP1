#include <iostream>
using namespace std;
int main() {
    int n, m;
     
     
    cin >> n >> m;

    int num1;

    num1=m/100;

    int num2;

    num2=m%10;

    int result;

    result=n + num1 + num2;

    cout << result;

    return 0;


    
}    