#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[100][100];

    //ввод матрицы
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>> a[i][j];
        }
    }

    //проверка симметричности
    bool symmetric = true;   //предполагаю,что матрица симметрична
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(a[i][j] != a[j][i]){
                symmetric=false;   //если нашлось несоответсвие,матрица нессиметрична
                break;
            }
        }

        //вывод результата
        if(!symmetric) break;
    }

    if(symmetric){
        cout << "Perfect." << endl;
    } else{
        cout << "Not perfect." << endl;
    }
    
    return 0;
}