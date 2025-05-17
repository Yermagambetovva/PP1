#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Цикл для каждого уровня ёлки
    for (int i = 1; i <= n; ++i) {
        // Печатаем точки слева
        for (int j = 0; j < n - i; ++j) {
            cout << ".";
        }
        // Печатаем звёзды
        for (int k = 0; k < 2 * i - 1; ++k) {
            cout << "*";
        }
        // Печатаем точки справа
        for (int j = 0; j < n - i; ++j) {
            cout << ".";
        }
        // Переход на новую строку
        cout << endl;
    }

    return 0;
}