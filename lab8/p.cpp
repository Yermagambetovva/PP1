#include <iostream>
#include <stack>
using namespace std;
int main(){
    int N;
    cin >> N;
    int strength;
    stack<int> alive; 
    for(int i = 0; i < N; ++i){
        cin >> strength;
        while(!alive.empty() && alive.top() <= strength){            // Пока стек не пуст и сила верхнего волшебника меньше или равна текущей
            alive.pop();                 //убираю волшебников которые побеждены
        }
        alive.push(strength);             // Добавляем текущего волшебника в стек
        cout << alive.size() << " ";    // Выводим количество волшебников, оставшихся живыми
    }
    cout << endl;
    return 0;
}