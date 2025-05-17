#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void getBinary(int number){
    string binary = " ";
    if(number == 0){
        cout << "0";
    }else if(number>0){
        while(number > 0){
            binary += to_string(number % 2);
            number = number / 2;
        }
    }
    reverse(binary.begin(), binary.end());
    cout << binary << endl;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    for_each(v.begin(), v.end(), getBinary);
    return 0;
}