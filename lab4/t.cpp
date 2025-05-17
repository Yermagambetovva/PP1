#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m; 
    int arr[100][100]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // Проверка на наличие 2x2 подматриц, заполненных одинаковыми числами
    bool isCool = true;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (arr[i][j] == arr[i][j + 1] &&
                arr[i][j] == arr[i + 1][j] &&
                arr[i][j] == arr[i + 1][j + 1]) {
                isCool = false;
                break;
            }
        }
        if (!isCool) break;
    }

    if (isCool){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }

    return 0;
}
//Как работает код:
//1.	Считывает размеры матрицы и её элементы.
//2.	Проверяет все возможные подматрицы размера 2x2. Если найдена хотя бы одна подматрица, в которой все элементы равны, программа выводит “NO”.
//3.	Если таких подматриц нет, выводится “YES”.
