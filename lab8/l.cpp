#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void problemL(){
    int n;
    cin >> n;
    vector<pair<int, int> > numbers;
    for(int i = 0; i < n; ++i){
        int num1, num2;
        cin >> num1 >> num2;
        numbers.push_back(make_pair(num1+num2, i));
    }
    sort(numbers.begin(), numbers.end());
    for(int i = 0; i <n ; ++i){
        cout << numbers[i].second + 1 << " ";
    }
}
int main(){
    problemL();
    return 0;
}
