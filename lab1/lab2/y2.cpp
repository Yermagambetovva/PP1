#include <iostream>

using namespace std;
     bool isLeapYear(int c){
        if (c % 400 == 0) return true;
        if (c % 100 == 0) return false;
        if (c % 4 == 0) return true;
        return false;
    }

    bool isValidDate(int a, int b, int c){
        int daysInMonth[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (b < 1 || b > 12) return false;
        if (b == 2 && isLeapYear(c)){
           
            daysInMonth[1] = 29;
        }

        if (a < 1 || a > daysInMonth[b - 1]) return false;
        return true;

    }
    
    int main (){
        int a, b, c;

        cin >> a >> b >> c;

        if(isValidDate (a, b, c)){
            cout << "yes" << endl;

        } else {
            cout << "no" << endl;
        }


    return 0;
}