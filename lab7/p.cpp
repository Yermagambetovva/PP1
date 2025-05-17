#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void randomPairGenerator(int n) {
    unordered_map<int, int> sumCount;  // Для хранения суммы и количества её появлений
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        
        int sum = a + b;
        cout << sumCount[sum] << endl;  // Выводим количество повторений суммы до этого
        sumCount[sum]++;  // Увеличиваем количество повторений этой суммы
    }
}

int main() {
    int n;
    cin >> n;  // Считываем количество пар
    randomPairGenerator(n);
    return 0;
}
