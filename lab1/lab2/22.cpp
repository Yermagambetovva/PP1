#include <iostream>
using namespace std;
int main (){
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; ++i){
        cin >> a[i];
    }
    
    int max1 = 0, max2 = 0, max3 = 0;
    
    for (int i = 0; i < N ; ++i){
        if (a[i]>max1){
            max3 = max2;
            max2 = max1;
            max1 = a[i];
        } else if(a[i] > max2){
            max3 = max2;
            max2 = a[i];
        } else if (a[i] > max3){
            max3 = a[i];
        }
    }

    cout << (max1 + max2 + max3) << endl;
    return 0;
}