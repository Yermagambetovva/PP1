#include <iostream>

using namespace std;

int main() {

    int n, d;


    cin >> n >> d;


    int overall = 0;


    for (int i=1; i <= d; i++) {

        if (i == 1)

        overall += n;
        else
        {
        int quantity = 2*i*n;

        overall += quantity;

    
        }   
    
    }

    cout << overall;



    return 0;
}