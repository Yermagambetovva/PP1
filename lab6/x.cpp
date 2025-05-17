#include <iostream>
using namespace std;

bool isUsual(int n) {
    if (n <= 0) return false; // Отрицательные числа не считаем обычными

    // Удаляем все факторы 2, 3 и 5
    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    while (n % 5 == 0) n /= 5;

    // Если после деления на 2, 3 и 5 осталось 1, значит число обычное
    return n == 1;
}

int main() {
    int n;
    cin >> n;
    if (isUsual(n)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
