#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left = 0, right = n - 1, answer = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == m) {
            answer = mid;
            break;
        } else if (arr[mid] < m) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
 if (answer == -1) {
        cout << left << endl;  
    } else {
        cout << answer << endl;  
    }
    return 0;
}