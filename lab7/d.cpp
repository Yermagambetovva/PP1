#include <iostream>
#include <vector>
using namespace std;
void noc(){
    int n, a, sum = 0;
    cin>>n>>a;
    vector <int> numbers(n);  
    for(int i=0;i<n;++i){
        cin>>numbers[i]; 
        sum += numbers[i];
    }
    int average = sum/n;
    cout << abs(average - a) << endl;
}
int main(){
    noc();
    return 0;
}