#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Вводим размер матрицы

    int matrix[n][n];  // Объявляем двумерный массив для хранения матрицы

    // Ввод элементов матрицы
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Вывод транспонированной матрицы
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[j][i] << " ";  // Меняем местами строки и столбцы
        }
        cout << endl;
    }

    return 0;
}