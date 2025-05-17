#include <iostream>
#include <vector>
using namespace std;
bool isEarlier(int h1, int m1, int s1, int h2, int m2, int s2) {
    if (h1 < h2) return true;
    if (h1 > h2) return false;
    if (m1 < m2) return true;
    if (m1 > m2) return false;
    if (s1 < s2) return true;
    if (s1 > s2) return false;
}
int main() {
    int n;
    cin >> n;  
    vector<vector<int>> times(n, vector<int>(3));  
    for (int i = 0; i < n; ++i) {
        cin >> times[i][0] >> times[i][1] >> times[i][2];  // Время в формате [часы, минуты, секунды]
    }

    // Простая сортировка пузырьком
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (!isEarlier(times[j][0], times[j][1], times[j][2], times[j+1][0], times[j+1][1], times[j+1][2])) {
                swap(times[j], times[j + 1]);  // Меняем местами, если нужно
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << times[i][0] << " " << times[i][1] << " " << times[i][2] << endl;
    }
    return 0;
}