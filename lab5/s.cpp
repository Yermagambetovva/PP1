#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;  // Читаем количество строк

    for (int i = 0; i < n; i++) {
        string email;
        getline(cin, email);  // Читаем строку

        // Ищем домен "@gmail.com" в конце строки
        size_t atPos = email.rfind("@gmail.com");

        // Проверяем, что "@gmail.com" найдено в конце строки
        if (atPos != string::npos && atPos + 10 == email.length()) {
            // Выводим логин (часть до @)
            cout << email.substr(0, atPos) << endl;
        }
    }

    return 0;
}