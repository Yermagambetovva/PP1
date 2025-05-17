#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n, m;
    cin >> n >> m;
    int a[n+1][m+1];
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j++){
            cin >> a[i][j];
            }
        }
    for(long long i = 0; i < n; i++){
        for(long long j = 0; j < m; j++){
            long long perfect_square = sqrt(a[i][j]);
            if(perfect_square * perfect_square == a[i][j]){
                cout << perfect_square << " ";
            } else{
                cout << a[i][j] << " ";
            }
        }
        cout<< endl;
    }
    return 0;
}