#include <iostream>
#include <string>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    string repeat = "";
    while(repeat.length() < t.length()){      //повторяем строку эс, пока длина повторенной строки меньше длины т
        repeat += s;
    }
    if (repeat == t){            //проверка совпадает ли повторенная строка с т
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
    return 0;
}