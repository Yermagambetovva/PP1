#include <iostream>
#include <string>
using namespace std;
void calculator(string s){
    string operation = "";
    string num = "";
    string num2 = "";
    int index = 0;
    for(int i = 0; i < s.length(); i +=3){
        if(s[i] == 'O'){
            num += "1";
        }else if(s[i] == 'E'){
            num += "8";
        }else if(s[i] == 'N'){
            num += "9";
        }else if(s[i] == 'Z'){
            num +=  "0";
        }else if(s[i] == 'S'){
            if(s[i+1] == 'E'){
                num += "7";
            }else{
                num += "6";
            }
        }else if(s[i] == 'F'){
            if(s[i] == 'I'){
                num += "5";
            }else{
                num += "4";
            }
        }else if(s[i] == 'T'){
            if(s[i] == 'W'){
                num += "2";
            }else{
                num += "3";
            }
        }else if(s[i] == '*' || s[i] == '+' || s[i] == '/' || s[i] == '-'){
            operation = s[i];
            index = i;
            break;
        }
    }
    for(int i = index + 1; i < s.length(); i +=3){
        if(s[i] == 'O'){
            num2 += "1";
        }else if(s[i] == 'E'){
            num2 += "8";
        }else if(s[i] == 'N'){
            num2 += "9";
        }else if(s[i] == 'Z'){
            num2 +=  "0";
        }else if(s[i] == 'S'){
            if(s[i+1] == 'E'){
                num2 += "7";
            }else{
                num2 += "6";
            }
        }else if(s[i] == 'F'){
            if(s[i] == 'I'){
                num2 += "5";
            }else{
                num2 += "4";
            }
        }else if(s[i] == 'T'){
            if(s[i] == 'W'){
                num2 += "2";
            }else{
                num2 += "3";
            }
        }
    }
    int a, b;
    a = atoi(num.c_str());
    b = atoi(num2.c_str());
    int result;
    if(operation == "+"){
        result = a+b;
    }else if(operation == "-"){
        result = a-b;
    }else if(operation == "*"){
        result == a*b;
    }else if(operation == "/"){
        result = a/b;
    }
    cout << result << endl;
}
int main(){
    string s;
    cin >> s;
    calculator(s);
    return 0;
}