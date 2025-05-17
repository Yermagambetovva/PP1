#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> numbers(n);  //создаю вектор с размером эн
    for(int i=0;i<n;++i){
        cin>>numbers[i]; 
    }
    sort(numbers.begin(), numbers.end()); //сортирую
    for(int i = 0; i < n; ++i){
        if(i != numbers[i]){
            cout << i << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}