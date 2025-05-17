#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    int amountOfSubjects;
    cin >> amountOfSubjects;
    double GPA = 0;
    int creditSum = 0;
    for(int i = 0; i < amountOfSubjects; i++){
        double GP; 
        int FirstAtt; cin >> FirstAtt;
        int SecondAtt; cin >> SecondAtt;
        int FinalExam; cin >> FinalExam;
        int overall = FirstAtt + SecondAtt + FinalExam;
        if(FirstAtt + SecondAtt < 30 || FinalExam < 20) GP = 0.0;
        else{
            double temp = ((overall - 50) / 5);
            GP = (temp * 1/3) + 1.0;
        }
        int credits;
        cin >> credits;
        creditSum += credits;
        GPA += (GP * credits);
        
    }
    cout << GPA / creditSum;
    
}
