#include <iostream>
#include <algorithm>
using namespace std;
int maximum(int a, int b, int c, int d){
    return max({a,b,c,d});
}
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int max = maximum(a, b, c, d);
    cout << max << endl;
    return 0;
}