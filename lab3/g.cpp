#include <iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;

    long long sum = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        sum += x;;
    }

    cout << sum << endl;


    return 0;
}