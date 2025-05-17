#include <iostream>
#include <vector>
using namespace std;

// Функция для перевода числа в двоичную строку
string DecToBin(long long number) {
    string binaryRepresentation = "";
    while (number > 0) {
        binaryRepresentation = (char)(number % 2 + '0') + binaryRepresentation;
        number /= 2;
    }
    return binaryRepresentation.empty() ? "0" : binaryRepresentation;
}

int main() {
    int amountOfNumbers;
    cin >> amountOfNumbers;  // Вводим количество чисел
    
    vector<string> isGood;  // Вектор для хранения результатов
    
    // Проходим по каждому числу
    for (int i = 0; i < amountOfNumbers; i++) {
        long long number;
        cin >> number;  // Вводим число
        
        string binaryNum = DecToBin(number);  // Переводим в двоичную строку
        
        // Удаляем все последовательности "10"
        bool changed = true;
        while (changed) {
            changed = false;
            for (int j = 0; j < binaryNum.length() - 1; j++) {
                if (binaryNum[j] == '1' && binaryNum[j + 1] == '0') {
                    binaryNum.erase(j, 2);  // Удаляем "10"
                    changed = true;
                    break;  // После удаления "10" начинаем проверку заново
                }
            }
        }
        // Если строка пустая после удаления всех "10", то выводим "YES", иначе "NO"
        if (binaryNum.empty())
            isGood.push_back("YES");
        else
            isGood.push_back("NO");
    }
    // Выводим все результаты
    for (auto result : isGood)
        cout << result << '\n';
    return 0;
}


/*
условие ? выражение_если_истина : выражение_если_ложь;
*/