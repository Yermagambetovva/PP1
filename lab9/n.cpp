#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v1(n);
    for(int i = 0; i < n; ++i){
        cin >> v1[i];
    }
    vector<int> v2(m);
    for(int j = 0; j < m; ++j){
        cin >> v2[j];
    }
    v1.erase(unique(v1.begin(), v1.end()), v1.end());  //чтобы убрать подряд идущие элементы
    v2.erase(unique(v2.begin(), v2.end()), v2.end());
    vector<int> result;
    //соединяем
    vector<int>::iterator it1 = v1.begin(), it2 = v2.begin();
    while (it1 != v1.end() || it2 != v2.end()) {
        if (it1 != v1.end()) {
            result.push_back(*it1++);
        }
        if (it2 != v2.end()) {
            result.push_back(*it2++);
        }
    }
    result.erase(unique(result.begin(), result.end()), result.end());    // Убираем дубликаты в result векторе
    for (vector<int>::iterator it = result.begin(); it != result.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
