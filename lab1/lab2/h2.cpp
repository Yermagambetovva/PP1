#include <iostream>

using namespace std;

int main (){

    int n, m;

    cin >> n >> m;

    if (n > m){
        cout << "1" << endl;
    } else if (n < m){
        cout << "2" << endl;
    } else if (n = m) {
        cout << "0" << endl;
    }


    return 0;
}