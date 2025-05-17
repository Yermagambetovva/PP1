#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    // Подсчет количества каждого числа в map
    map<int, int> freq;
    for (int i = 0; i < v.size(); ++i) {
        freq[v[i]]++;
    }
    // Проверка на наличие второго минимального числа
    if (freq.size() < 2) {
        cout << "0" << endl; 
        return 0;
    }

    // Поиск второго минимального числа
    map<int, int>::iterator it = freq.begin();
    ++it; // Пропустить первое минимальное

    // Вывод количества вхождений второго минимального числа
    cout << it->second << endl;

    return 0;
}
/*
Объяснение:
Подсчет частот с помощью std::map:

Ключи map автоматически сортируются, поэтому первое минимальное значение окажется в начале контейнера (begin()), а второе минимальное — следующим элементом (++it).
Значения map (второй элемент пары key-value) хранят количество вхождений ключа.
Проверка на наличие второго минимального:

Если в map меньше двух уникальных чисел, второго минимального просто нет, и выводится 0.
Доступ к частоте второго минимального числа:

После перехода к следующему элементу итератор указывает на второе минимальное число, а его частота доступна через it->second.*/
/*
#include <iostream>
#include <map>
using namespace std;

int main() {
    // Создаем map
    map<int, string> data;

    // Добавляем пары ключ-значение
    data[10] = "Ten";
    data[5] = "Five";
    data[20] = "Twenty";
    data[1] = "One";

    // Находим минимальный ключ
    if (!data.empty()) {
        int minKey = data.begin()->first; // Первый ключ в map
        cout << "Минимальный ключ: " << minKey << endl;
        cout << "Соответствующее значение: " << data.begin()->second << endl;
    } else {
        cout << "Map пустой" << endl;
    }

    return 0;
}
*/