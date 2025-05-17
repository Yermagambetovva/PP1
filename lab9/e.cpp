#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(const vector<int>& a, const vector<int>& b) {
    int sumA = 0, sumB = 0;
    // Calculate the sum of the elements in each row
    for (int num : a) {
        sumA += num;
    }
    for (int num : b) {
        sumB += num;
    }

    // Compare by sum
    if (sumA != sumB) {
        return sumA < sumB;
    }

    // Compare by row size if sums are equal
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }

    // Compare corresponding elements if sum and size are equal
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return a[i] < b[i];
        }
    }

    return false; // If all comparisons are equal, the rows are already in order
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n);

    // Read the matrix
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        matrix[i].resize(m); // Resize the current row to the given size
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Sort the matrix using the comparator
    sort(matrix.begin(), matrix.end(), comparator);

    // Output the sorted matrix
    for (int i = 0; i < matrix.size(); ++i) {
    for (int j = 0; j < matrix[i].size(); ++j) {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
    }

    return 0;
}
