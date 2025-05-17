#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;  // Ввод размерностей массива

    int negative_count = 0;  // Переменная для хранения количества отрицательных чисел

    // Ввод элементов массива и подсчет отрицательных чисел
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int elem;
            cin >> elem;
            if (elem < 0) {
                ++negative_count;  // Увеличиваем счетчик отрицательных чисел
            }
        }
    }

    // Вывод количества отрицательных чисел
    cout << negative_count << endl;

    return 0;
}