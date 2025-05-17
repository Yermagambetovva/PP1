#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(){
    int numIngredients, numCombined;
    cin >> numIngredients;
    
   
    vector<string> ingredients(numIngredients);
    for (int i = 0; i < numIngredients; i++) {
        cin >> ingredients[i]; 
    }
    cin >> numCombined;
    vector<pair<string, string>> combined(numCombined);

    for (int i = 0; i < numCombined; i++) {
        string ingredients1, ingredients2;
        cin >> ingredients1 >> ingredients2;
        combined[i] = make_pair(ingredients1, ingredients2);
    }
    string haveIngredient;
    int Counts = 0;
    cin >> haveIngredient;
    vector<string> list;
    for (const auto& pair : combined) {
        if (pair.first == haveIngredient &&
            find(list.begin(), list.end(), pair.second) == list.end()) { 
            list.push_back(pair.second);
            Counts++;
        }
        else if (pair.second == haveIngredient &&
            find(list.begin(), list.end(), pair.first) == list.end()) { 
            list.push_back(pair.first);
            Counts++;
        }
    }
    cout << Counts << endl;
    sort(list.begin(), list.end());
    for (string elm : list) {
        cout << elm << " ";
    }

    return 0;
}