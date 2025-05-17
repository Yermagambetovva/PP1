#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    double D = (b * b + 4 * a * c);
    
    if (D > 0){
        double x1 = (-b+sqrt(D)) / (2*a);
        double x2 = (-b-sqrt(D)) / (2*a);  
        cout << x1 << x2 << endl;
    } else if(D == 0){
        double x = (-b / (2*a));
        cout << x << endl;
    } else{
        cout << "no solution" << endl;
    }

    return 0;
}