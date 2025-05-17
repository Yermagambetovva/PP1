#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool Comparator(int a, int b){
    // Если оба числа четные, сортируем по убыванию
    if (a % 2 == 0 && b % 2 == 0) {
        return a > b;  // Убывание четных
    }
    // Если оба числа нечетные, сортируем по возрастанию
    if (a % 2 != 0 && b % 2 != 0) {
        return a < b;  // Возрастание нечетных
    }
    // Если одно число четное, а другое нечетное:
    if (a % 2 == 0 && b % 2 != 0) {
        return true;  // Четное должно быть впереди
    }
    if (a % 2 != 0 && b % 2 == 0) {
        return false;  // Нечетное должно быть после четного
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    vector <int> array(n);
    for(int i = 0; i <n ; ++i){
        cin >> array[i];
    }
    sort(array.begin(), array.end(), Comparator);
    for(int i = 0; i < array.size(); ++i){
        cout << array[i] << " ";
    }
    return 0;
}