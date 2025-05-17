#include <iostream>
#include <string>
using namespace std;
int main() {
    string N;
    cin >> N;
    int oddSum = 0, evenSum = 0;
    // Проходим по строке и считаем суммы
    for (int i = 0; i < N.length(); i++) {
        int digit = N[i] - '0';  // Преобразуем символ в цифру
        if (i % 2 == 0) {
            oddSum += digit;  // Если позиция нечетная
        } else {
            evenSum += digit;  // Если позиция четная
        }
    }

    // Проверяем равны ли суммы
    if (oddSum == evenSum) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}