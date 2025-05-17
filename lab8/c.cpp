#include <iostream>
#include <queue>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    queue<int> numbers;
    for(int i = 0; i < n; ++i){
        int nums;
        cin >> nums;
        numbers.push(nums);
    }
    map<int, int> count;  
    // Подсчитываем вхождения каждого элемента в очереди
    while (!numbers.empty()) {
        count[numbers.front()]++;
        numbers.pop();
    }
    int twicecount = 0;
    for (map<int, int>::iterator it = count.begin(); it != count.end(); ++it) {
        if (it->second >= 2) {
            twicecount++;
        }
    }
    cout << twicecount << endl;
    return 0;
}