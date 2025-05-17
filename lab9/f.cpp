#include <iostream>
#include <map>
#include <iomanip>  // Для fixed и setprecision
using namespace std;

int main() {
    int N, m;
    cin >> N;

    // Мапа для хранения данных
    map<string, int> places1;

    // Ввод данных для первого набора
    for (int i = 0; i < N; ++i) {
        cin >> m;  // Количество мест в текущий день
        for (int j = 0; j < m; ++j) {
            string cities1;
            int num1;
            cin >> cities1 >> num1;
            places1[cities1] += num1;  // Копируем данные по городам в places1
        }
    }

    // Итоговый мап для объединенных данных
    map<string, int> newmap = places1;

    // Считывание второго набора данных
    int k;
    cin >> k;

    // Мапа для второго набора мест
    map<string, int> places2;
    for (int i = 0; i < k; ++i) {
        string cities2;
        int num2;
        cin >> cities2 >> num2;
        places2[cities2] = num2;  // Заполняем places2
    }

    // Объединяем данные из places2 в newmap
    for (map<string, int>::iterator it = places2.begin(); it != places2.end(); ++it) {
        newmap[it->first] += it->second;  // Суммируем количество студентов для каждого города
    }

    // Суммируем общее количество студентов
    double totalSum = 0;
    for (map<string, int>::iterator it = newmap.begin(); it != newmap.end(); ++it) {
        totalSum += it->second;
    }

    // Выводим результаты
    cout << fixed << setprecision(5);
    for (map<string, int>::iterator it = newmap.begin(); it != newmap.end(); ++it) {
        double percentage = (static_cast<double>(it->second) / totalSum) * 100;
        // Убираем ненужные нули в конце с помощью stringstream
        cout.precision(4);  // выводим с точностью до 4 знаков
        cout << it->first << " " << fixed << percentage << endl; // Выводим название города и процент
    }

    return 0;
}


/*
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#define ll long long

using namespace std;



int main() {
    int n , summ = 0;
    map<string, ll>committee;
    cin >> n;
    
    while (n--)
    {
        int m;
        cin >> m;
       
        for (int i = 0; i < m; i++)
        {
            pair<string, ll> temp;
            cin >> temp.first >> temp.second;
            summ +=temp.second;
            committee[temp.first] +=temp.second;
        }
    }
    for(auto s:committee){
        cout << s.first << " " << (double)(s.second*100)/summ << endl;
    }
    
    
    
    return 0;
} 

*/


/* static_cast - используется, когда вы хотите преобразовать один тип в другой тип, который явно совместим с исходным. Это может быть преобразование:
целых типов (например, int в double),
указателей или ссылок на объекты в иерархии классов, если они совместимы (например, базовый класс в производный),
константных типов (например, const int в int), если это разрешено.

в этом коде преобразует int в double
*/