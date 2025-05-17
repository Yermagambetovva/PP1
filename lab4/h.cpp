#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a,b,c=0,s=0;
    cin >> a >> b;
    int array[a][b];
    for(int i=0;i<a;i++){
        for(int j=0; j<b;j++){
            cin >> array[i][j];
        }
    }
    for(int i=0; i<a; i++){         //цикл по строкам
        c=0;                       //обнуляем счетчик для каждой строки
        for(int j = 0; j<b;j++){   // цикл по столбцам
            c+=array[i][j];     //суммируем очки в строке
            if(c>s){      //если сумма очков в текущей строке больше максимальной
            s=c;      //обговляем максимальную сумму(если сумма является макс она записывается в s)
            }
        }
    }
    
    cout << s;  //выводим макс количество всех игроков
    
    return 0;
}