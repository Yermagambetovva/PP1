#include <iostream>
using namespace std;

int main() {
    
    int h, m, t;
    cin >> h >> m >> t;

    
    double result = (double(h) / m) * t;

    
    cout << result << endl;

return 0;
}