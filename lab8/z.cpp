#include <iostream> 
#include <algorithm> 
#include <string>
using namespace std;
void decrypt(string& str){
    for(int i = 0; i < str.length(); i++){
        if(str.at(i) == '#')
            {
                if( i != 0 )
                    str.erase(--i, 1);
                str.erase(i--, 1);
            }
    }
}
int main(){
    string firstName, secondName;
    cin >> firstName >> secondName;
    decrypt(firstName);
    decrypt(secondName);
    cout << ((firstName == secondName) ? "True" : "False");
}