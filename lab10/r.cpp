#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }
    vector<int> result;
    for(int i = 0; i < n; ++i){
        int count = 0;
        for(int j = 0; j < n; ++j){
            if(a[i][j] > a[i][0]){
                count++;
            }
        }
        result.push_back(count);
    }
    for(auto i : result){
        cout << i << endl;
    }
    return 0;   
}


/*
auto — это ключевое слово в C++, введённое в стандарте C++11, которое позволяет компилятору автоматически выводить тип переменной, основываясь на контексте. Это удобно, когда тип переменной длинный, сложный или очевидный из правой части выражения.

Примеры использования:
1. Простое присваивание:
cpp
Копировать код
auto x = 42; // Компилятор выводит тип x как int
auto y = 3.14; // Компилятор выводит тип y как double
2. Итераторы в контейнерах STL:
Использование auto особенно полезно для итераторов в контейнерах, так как их типы обычно длинные и сложные.

cpp
Копировать код
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4};
    
    // Вместо того, чтобы явно указывать тип итератора:
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    
    cout << endl;

    // С использованием auto:
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}
Вывод:

Копировать код
1 2 3 4
1 2 3 4
3. Сложные типы:
Если тип переменной сложно определить или длинный, auto упрощает запись.

cpp
Копировать код
#include <map>
using namespace std;

int main() {
    map<int, pair<string, double>> data;
    data[1] = {"Example", 3.14};

    // Сложный тип:
    map<int, pair<string, double>>::iterator it = data.begin();

    // С auto:
    auto it2 = data.begin();
    return 0;
}
Примечания:
auto не меняет тип: Компилятор определяет точный тип на этапе компиляции.

cpp
Копировать код
auto x = 5;  // int
auto y = 5.0; // double
auto и ссылки: Если переменная должна быть ссылкой, укажите это явно.

cpp
Копировать код
int z = 10;
auto& ref = z; // ref — ссылка на z*/