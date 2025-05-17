#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[n][n];
    int value = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (value <= n * n) {
        for (int i = left; i <= right && value <= n * n; i++) {
            matrix[top][i] = value++;
        }
        top++;

        for (int i = top; i <= bottom && value <= n * n; i++) {
            matrix[i][right] = value++;
        }
        right--;
        for (int i = right; i >= left && value <= n * n; i--) {
            matrix[bottom][i] = value++;
        }
        bottom--;

        for (int i = bottom; i >= top && value <= n * n; i--) {
            matrix[i][left] = value++;
        }
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}