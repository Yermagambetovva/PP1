#include <iostream>
#include <vector>
using namespace std;
void culinarySkill(){
    vector<int> frags;
    int input;
    while (true) {
        cin >> input;
        if (input == 0) {
            break;
        }
        frags.push_back(input);
    }

    int n = frags.size();
    vector<int> results;

    
    for (int i = 0; i < n / 2; ++i) {
        results.push_back(frags[i] + frags[n - 1 - i]);
    }

    
    if (n % 2 == 1) {
        results.push_back(frags[n / 2]); 
    }

   
    for (size_t i = 0; i < results.size(); ++i) {
        cout << results[i];
        if (i < results.size() - 1) {
            cout << " "; 
        }
    }
}
int main(){
culinarySkill();
return 0;
}