#include <iostream>
#include <stack> 
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> actions(n);
    for(int i = 0; i < n; ++i){
        cin >> actions[i];
    }
    stack<int> candies;
    vector<int> result;
    for (int i = 0; i < n; ++i) {
        if (actions[i] == 0) {
            // Если событие 0, то продаем верхнюю коробку
            if (!candies.empty()) {
                result.push_back(candies.top());
                candies.pop();
            }
        } else {
            // Если событие больше 0, то получаем коробку с конфетами
            candies.push(actions[i]);
        }
    }
    
    // Если были продажи, выводим результат
    if (result.empty()) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}