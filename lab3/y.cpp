#include <iostream>
using namespace std;
int main(){
    int n, count = 0;
    cin >> n;
    for (int i = 0; i<n; i++){
        int num;
        cin >> num;
        while(num > 0){
            if (num % 10 == 0){
                count++;
            }
            num /= 10;
        }
    }

    cout << count << endl;
    return 0;
}