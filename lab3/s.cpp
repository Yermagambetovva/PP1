#include <iostream>
#include <cmath>            //для sqrt
using namespace std;
int main(){
    long long x;
    cin >> x;
    long long root = sqrt(x);
    if(root * root == x){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
    return 0;

}