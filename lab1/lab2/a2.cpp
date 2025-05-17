#include <iostream>

using namespace std;

int main(){

    int n;

    cin >> n;

    if (n % 2 == 0) {

        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
    
    
    if ( n == 0){

        cout << "none" << endl;
    }


    return 0;
}