#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }
   for (int j = 0; j < n; j++) {
        cout << j << " ";
    }
   cout << endl;

   for (int i =1 ; i < n; i++) {
        cout << i << " ";
    for (int j = 1; j < n; j++){
   
       arr[i][j] = i * j;
        cout << arr[i][j] << " ";
    
   

  }
  cout << endl;
 }
}