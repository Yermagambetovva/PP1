#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1000][1000]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int first = INT_MIN, index_first_row = 0, index_first_col = 0; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > first) {
                first = a[i][j];
                index_first_row = i;
                index_first_col = j;
            }
        }
    }

    cout << index_first_row + 1 << " " << index_first_col + 1 << endl;
    return 0;
}