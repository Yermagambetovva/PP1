#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> numbers(n);
    for(int i = 0; i <n; ++i){
        cin >> numbers[i];
    }
    int counter;
    counter = count(numbers.begin(), numbers.end(), k);
    cout << counter << endl;
    return 0;
}