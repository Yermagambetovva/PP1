#include <iostream>
using namespace std;
int main(){
    int mid, end, final;
    cin >> mid >> end >> final;
    int x = mid + end + final;
    int y = mid + end;
    if ((x >= 70) && (y >= 30) && (final >= 20)){
        cout << "YES !" << endl;
    } else {
        cout << "NO." << endl;
    }
    return 0;
}