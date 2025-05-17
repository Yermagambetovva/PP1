#include<iostream>
#include<unordered_map>
#include<set>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<string, string> student_assistant;
    for(int i = 0; i < n; i++){
        string assistant_name;
        int number_of_students;
        cin>>assistant_name>>number_of_students;
        for(int i = 0; i < number_of_students; i++){
            string student_name;
            cin>>student_name;
            student_assistant[student_name] = assistant_name;
        }
    }
    int number_of_students_required;
    cin>> number_of_students_required;
    vector<string> assistants_of_required_students;
    for(int i = 0; i < number_of_students_required; i++){
        string student_name;
        cin>>student_name;
        if(student_assistant.count(student_name))
        {
            assistants_of_required_students.push_back(student_assistant[student_name]);
        }
        else
            assistants_of_required_students.push_back("F");
    }
    for(auto i : assistants_of_required_students)
        cout<<i<<endl;
}