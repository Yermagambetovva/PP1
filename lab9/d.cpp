#include <iostream>
#include <math.h>
#include <stack>
#include <string>
#include <valarray>
using namespace std;
bool isSquare(int number1, int number2) {
    int number = number2 * 10 + number1;
    long result = powl(number, 0.5);
    return result * result == number;
}
void problemD() {
    string number;
    cin >> number;
    stack<int> numbers;
    for (int i = 0; i < number.length(); i++) {
        int number1 = number[i] - 48;
        if(!numbers.empty()) {
            int number2 = numbers.top();
            if(isSquare(number1, number2)) {
                numbers.pop();
            }else {
                numbers.push(number1);
            }
        }else {
            numbers.push(number1);
        }
    }
    if(numbers.empty())
        cout << "Stack is empty";
    else {
        while(!numbers.empty()) {
            cout << numbers.top();
            numbers.pop();
        }
    }
}
int main() {
    problemD();
    return 0;
}