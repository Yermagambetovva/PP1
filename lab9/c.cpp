#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
long long generateC(){
    static long long n = -1;
    n++;
    return powl(n, n);
}
void problemC(){
    int n;
    cin >> n;
    vector <long long> powers(n+1);
    generate(powers.begin(), powers.end(), generateC);
    for(int i = 0; i < powers.size(); ++i){
        cout << powers[i] << " ";
    }
}
int main(){
    problemC();
    return 0;
}
