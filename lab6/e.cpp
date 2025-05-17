#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double hypotenuse(int a, int b){
    double res1=pow(a,2);
    double res2=pow(b,2);
    double res3= res1 + res2;
    double result = pow(res3,0.5);
    return result;
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << setprecision(4) << hypotenuse(a,b) << endl;
    return 0;
}