#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int odd = 1;                    //начинается с 1
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << odd << " ";      //вывожу двумерный массив
        }
        cout << endl;
        odd += 2;       //к каждой последующей строке прибавляется +2
    }
    return 0;
    
}