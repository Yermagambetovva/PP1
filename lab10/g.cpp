#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> names(n);
    for (int i = 0; i < n; ++i) {
        cin >> names[i];
    }

    unordered_map<string, int> counts;   
    vector<string> cheaters;            
    for (const string& name : names) {
        counts[name]++;
        if (counts[name] == 2) { 
            cheaters.push_back(name);
        }
    }

    if (cheaters.empty()) {
        cout << "Understandable, have a great day" << endl;
    } else {
        for (const string& cheater : cheaters) {
            cout << cheater << endl;
        }
    }

    return 0;
}

/*
int main() {
    int n;
    cin >> n;
    vector<string> names(n);
    for (int i = 0; i < n; ++i) {
        cin >> names[i];
    }
    unordered_set<string> seen;
    vector<string> duplicates;          
    for ( vector<string>::iterator it = names.begin(); it != names.end(); ++it) {
        if (seen.find(*it) != seen.end()) {
            duplicates.push_back(*it);
        } else {
            seen.insert(*it);
        }
    }
    for (vector<string>::iterator it = duplicates.begin(); it != duplicates.end(); ++it) {
        cout << *it << endl;
    }
    return 0;
}
*/

/*
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Пример вектора
    std::vector<int> vec = {1, 2, 3, 2, 4, 5, 1, 6};

    // Сортируем вектор
    std::sort(vec.begin(), vec.end());

    // Перебираем элементы, сравнивая соседние
    std::cout << "Повторяющиеся элементы: ";
    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i] == vec[i - 1]) {
            // Выводим элемент только один раз
            if (i == 1 || vec[i] != vec[i - 2]) {
                std::cout << vec[i] << " ";
            }
        }
    }

    return 0;
}
*/