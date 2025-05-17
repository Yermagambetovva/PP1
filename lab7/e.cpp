#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int theLostNum(vector <int> numbers, int n){
sort(numbers.begin(), numbers.end()); //сортирую
    for(int i = 0; i < n; ++i){
        if(i != numbers[i]){
            return i;
        }
    }
    return n;
}
int main(){
    int n;
    cin>>n;
    vector <int> numbers(n);  //создаю вектор с размером эн
    for(int i=0;i<n;++i){
        cin>>numbers[i]; 
    }
    cout << theLostNum(numbers, n) << endl;
    return 0;
}