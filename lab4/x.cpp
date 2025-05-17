#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int max1 = -1000000000;      //начальное значение для макс и мин(в условии задано)
    int max2 = -1000000000;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            int num;
            cin >> num; 
            if( num > max1){     //если число больше максимума
                max2 = max1;     //обновляем второй максимум
                max1 = num;      //обновляем максимум
            } else if(num > max2 && num < max1){     //если число между макс1 и макс2
                max2 = num;      //обновляем второй максимум
            }
        }
    }
    if(max2 == -10000){       //если все числа одинаковые
        cout << "0" << endl;  //выводим 0
    } else{
        cout << max2 << endl;
    }
    return 0;
}