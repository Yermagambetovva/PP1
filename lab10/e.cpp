#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Структура для хранения числа и его частоты
struct Element {
    int value;  // Значение элемента
    int count;  // Частота элемента
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    // Вводим массив
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Массив для хранения элементов и их частот
    vector<Element> freq;

    // Подсчитываем частоты элементов
    for (int i = 0; i < n; ++i) {
        bool found = false;
        for (int j = 0; j < freq.size(); ++j) {
            if (freq[j].value == arr[i]) {
                freq[j].count++;
                found = true;
                break;
            }
        }
        if (!found) {
            // Если элемент еще не встречался, добавляем его в массив
            freq.push_back({arr[i], 1});
        }
    }

    // Находим максимальную частоту
    int maxFreq = 0;
    for (const auto& elem : freq) {
        maxFreq = max(maxFreq, elem.count);
    }

    // Проверка: если максимальная частота больше, чем (n + 1) / 2, выводим Impossible
    if (maxFreq > (n + 1) / 2) {
        cout << "Impossible" << endl;
    } else {
        cout << "Possible" << endl;
    }

    return 0;
}
