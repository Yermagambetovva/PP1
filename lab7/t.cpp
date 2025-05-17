#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
bool isDigitsDifferent(string number){
    set<char> digits;
    for(int i = 0; i< number.length(); i++){
        if(!digits.count(number[i]))
            digits.insert(number[i]);
    }
    return (digits.size() == number.length());
}
int main() {
    int l, r;
    cin>>l>>r;
    while(l <= r){
        if(isDigitsDifferent(to_string(l)))
            {
                cout<<l;
                return 0;
            }
        l++;
    }
    cout<<"Understandable, have a great day";
}