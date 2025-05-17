#include <iostream>


using namespace std;

int main(){
    int num;
    long long sum = 0;


    //читаем числа из ввода и суммируем их
    while(cin>>num){
        sum += num;
    }

    cout << sum << endl;

    return 0;
}