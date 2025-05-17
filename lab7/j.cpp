#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    queue<int> numbers;  // Очередь для хранения чисел
    vector<int> unique_numbers;  // Вектор для отслеживания уникальных чисел
    int num;

    // Чтение чисел до конца ввода (EOF)
    while (cin >> num) {
        numbers.push(num);  // Добавляем число в очередь
    }

    // Перебираем элементы из очереди и отслеживаем уникальность
    while (!numbers.empty()) {
        int current = numbers.front();  // Получаем элемент из начала очереди
        numbers.pop();  // Убираем его из очереди

        // Проверяем, встречался ли элемент ранее
        bool is_unique = true;
        for (int i = 0; i < unique_numbers.size(); ++i) {
            if (unique_numbers[i] == current) {
                is_unique = false;  // Элемент уже встречался
                break;
            }
        }

        // Если элемент уникальный, добавляем его в вектор
        if (is_unique) {
            unique_numbers.push_back(current);
        }
    }

    // Выводим количество уникальных чисел
    cout << unique_numbers.size() << endl;

    return 0;
}
