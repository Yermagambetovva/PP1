#include <vector>
#include <iostream>
#include <map>
#include <climits>
#include <algorithm>
using namespace std;
struct date{

    int year;
    int month;
    int day;


    date(int d , int m, int y) : day(d) , month (m) , year(y){}

    static bool cmp(date a , date b){
        if (a.year == b.year && a.month == b. month ) return a.day < b.day;
        if (a.year == b.year ) return a.month < b.month;
        return a.year < b.year;
    }
    void takeINput(){
        cin >> day >> month >> year;
        if (day == 0) return;
    }
};

int main() {

    vector <date> v;
  
    date yea (0,0,0);

    while(true){
    yea.takeINput();
    if(yea.day==0)break;
    v.push_back(yea);
    }

    sort (v.begin(),v.end(),date ::cmp);
   for (const auto& res : v) {
            cout << (res.day < 10 ? "0" : "") << res.day << " "
             << (res.month < 10 ? "0" : "") << res.month << " "
             << (res.year < 1000 ? (res.year < 100 ? (res.year < 10 ? "000" : "00") : "0") : "") << res.year << endl;
    }


    return 0;
}