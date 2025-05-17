#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int max_val = INT_MIN;
    int max_row = -1, max_col = -1;

    // Ввод элементов матрицы и проверка главной диагонали
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int elem;
            cin >> elem;

            // Проверяем только элементы на главной диагонали (где i == j)
            if (i == j && elem > max_val) {
                max_val = elem;
                max_row = i + 1;  // Сохраняем координаты (добавляем 1 для правильного формата)
                max_col = j + 1;
            }
        }
    }

    // Вывод результата
    cout << "Maximum element is: " << max_val << " with coordinates: (" << max_row << "," << max_col << ")" << endl;

    return 0;
}