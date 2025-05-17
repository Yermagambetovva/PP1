#include <iostream>
#include <cmath>
using namespace std;

int main (){ 
    int n, k;

    cin >> n >> k;
    
    if (n < k){
       double res = ((k-n)*2/n);
       cout << res ;
    } else {
        double res = ceil((n*2)/k);
       cout << res ;

    }


    return 0;
}