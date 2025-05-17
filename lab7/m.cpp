#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string, bool> uniquesurname;
    int count = 0;
    for(int i = 0; i < n; ++i){
        string surname;
        cin >> surname;
        if(uniquesurname.find(surname) == uniquesurname.end()){  //проверяю есть фамилия в мапе
            count++;
            uniquesurname[surname] = true;
        }
    }
    cout << count << endl;
    return 0;
}