#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void problemJ() {
    int n;
    cin >> n;
    vector<pair<string, int> > serials; 
    //vector<pair<string, int> >::iterator it; 
    for (int i = 0; i < n; ++i) {
        string s;
        int k;
        cin >> s >> k;
        bool found = false;
        /*
        for (it == serials.begin(); it != serials.end(); it++) {
            if (it->first == s) {
                it->second += k;
                found = true;
                break;
            }
        }
        */

       for (auto &entry : serials) {
            if (entry.first == s) {
                entry.second += k;
                found = true;
                break;
            }
       }
        if (!found) {
            serials.push_back(make_pair(s, k));
        }
    }
    sort(serials.begin(), serials.end());
    /*for (it == serials.begin(); it != serials.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    */

    for (const auto &entry : serials) {
        cout << entry.first << " " << entry.second << endl;
    }

}




/*
void problemJ(){
    int n, overall = 0;
    cin >> n;
    if(n<=100){
        return;
    }
    vector<pair<string, int> > serials;
    for(int i = 0; i < n; ++i){
        string s;
        int k;
        cin >> s >> k;
        pair<string, int> serial = make_pair(s,k);
        serials.push_back(serial);
        overall += k;
    }
    for (int i = 0; i <serials.size(); ++i){
        int sum = serials[i].second;
        for(int j=i+1; j <serials.size();++j){
            if(serials[i].first == serials[j].first){
                sum += serials[j].second;
                serials.erase(serials.begin() + j);
            }
        }
    serials[i].second = sum;
    }
    sort(serials.begin(), serials.end());
    for(int i = 0; i < serials.size(); ++i){
        cout << serials[i].first << " " << serials[i].second  << endl;
    }
}
*/

int main(){
    problemJ();
    return 0;
}