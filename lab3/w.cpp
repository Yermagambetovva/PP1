#include <iostream>
#include <iomanip>       //для setw, hex
using namespace std;
int main(){
    int N;
    cin >> N;

    cout << hex << uppercase << N << endl;   //uppercase используется чтобы символы A,B,C,D,E,F были заглавными
    return 0;
}