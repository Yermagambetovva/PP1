#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M; 
    vector<int> seq(N);  
    for (int i = 0; i < N; ++i) {
        cin >> seq[i];
    }
    reverse(seq.begin(), seq.end());
    rotate(seq.begin(), seq.begin() + (N - M), seq.end());
    for (int i = 0; i < N; ++i) {
        cout << seq[i] << " ";
    }
    cout << endl;

    return 0;
}
