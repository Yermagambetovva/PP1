#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

void missingGroup(int array[], int x) {
    int miss = 0;
    int otvet = 1;
    for (int i = 1; i <= 1000; i++) {
        if(array[i] == 0) {
            miss++;
            if (miss == x) {
                otvet = i;
            }
        }
    }
    if(x > miss)
        cout << -1;
    else
        cout << otvet;

}

int main() {
int n, x;
    static int array[1001] = {};

    while (cin.peek() != '\n') {
        cin >> n;
        if (n >= 1 && n <= 1000) {
            array[n] = 1;
        }
    }
    cin >> x;
    missingGroup(array, x);
    return 0;
}