#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int n1, n2;  // Количество подписок на первом и втором аккаунте
    cin >> n1;
    
    set<string> subscriptions1;  // Множество для подписок первого аккаунта
    for (int i = 0; i < n1; ++i) {
        string name;
        cin >> name;
        subscriptions1.insert(name);  // Добавляем подписку в множество
    }
    
    cin >> n2;
    
    set<string> subscriptions2;  // Множество для подписок второго аккаунта
    for (int i = 0; i < n2; ++i) {
        string name;
        cin >> name;
        subscriptions2.insert(name);  // Добавляем подписку во множество
    }

    // Множество для хранения подписок, которые не пересекаются
    set<string> result;
    
    // Найдем разницу: подписки, которые есть в первом аккаунте, но нет во втором
    set<string>::iterator it;
    for (it = subscriptions1.begin(); it != subscriptions1.end(); ++it) {
        if (subscriptions2.find(*it) == subscriptions2.end()) {
            result.insert(*it);  // Если подписки нет во втором аккаунте, добавляем в результат
        }
    }

    // Аналогично для подписок второго аккаунта
    for (it = subscriptions2.begin(); it != subscriptions2.end(); ++it) {
        if (subscriptions1.find(*it) == subscriptions1.end()) {
            result.insert(*it);  // Если подписки нет в первом аккаунте, добавляем в результат
        }
    }

    // Выводим результат в отсортированном порядке
    for (it = result.begin(); it != result.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
