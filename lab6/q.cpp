#include <iostream>
using namespace std;
void persentOfGirls(double n, double m){
    cout << (100/n)*m << endl;
}
int main(){
    double n, m;
    cin >> n >> m;
    persentOfGirls(n,m);
    return 0;
}