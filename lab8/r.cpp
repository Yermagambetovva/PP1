#include <iostream>
#include <vector>
using namespace std;
//задачу можно решить стэком
int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    vector<int> newprices(n);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    // Для каждого товара ищем ближайший товар с меньшей или равной ценой справа
    for (int i = 0; i < n; ++i) {
        bool discountApplied = false;
        for (int j = i + 1; j < n; ++j) {
            if (prices[j] <= prices[i]) {
                newprices[i] = prices[i] - prices[j]; 
                discountApplied = true;
                break;
            }
        }
        if (!discountApplied) {
            newprices[i] = prices[i]; 
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << newprices[i] << " ";
    }
    cout << endl;
    return 0;
}
