#include <iostream>
#include <algorithm>   //для фyнкции max_element
using namespace std;
int main(){
    int N;
    cin>>N;
    int a[1000][1000];
    //ввод матрицы
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> a[i][j];
        }
    }
    //обработка каждой строки
    for(int i = 0; i < N; ++i){
        int max = *max_element(a[i], a[i]+N);  //нахождение максимального элемента в строке
        for(int j = 0; j < N; ++j){
            a[i][j] = max;                     //заполнение строки максимальным элементом
        }
    }

    //вывод результата
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}