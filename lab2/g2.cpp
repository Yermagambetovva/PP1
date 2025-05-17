#include <iostream>
#include <cmath>
using namespace std;

int main (){ 
    int n, k;

    cin >> n >> k;

    int sides = n * 2;

    int minutes = ceil(double(sides) / k);

    cout << minutes << endl;


    return 0;
}