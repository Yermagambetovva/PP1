#include <iostream>
#include <string>

using namespace std;

string digits[10] = {"ZER", "ONE", "TWO", "THR", "FOU", "FIV", "SIX", "SEV", "EIG", "NIN"};

int get_digit_representation(const string& str_representation) {
    for (int i = 0; i < 10; i++) {
        if (str_representation == digits[i])
            return i;
    }
    return -1;
}

int find_operation(const string& s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*')
            return i;
    }
    return -1;
}

long long parse_number(const string& expression, int start, int end) {
    long long number = 0;
    for (int i = start; i < end; i += 3) {
        string digit_representation = expression.substr(i, 3);
        number = number * 10 + get_digit_representation(digit_representation);
    }
    return number;
}
string get_number_representation(long long number) {
    if (number == 0) return "ZER";
    string result = "";
    string temp = "";
    while (number > 0) {
        temp = digits[number % 10] + temp;
        number /= 10;
    }
    return temp;
}

int main() {
    string expression;
    cin >> expression;

    int operation_pos = find_operation(expression);
    long long num1 = parse_number(expression, 0, operation_pos);
    long long num2 = parse_number(expression, operation_pos + 1, expression.length());

    long long int_answer;
    if (expression[operation_pos] == '+')
        int_answer = num1 + num2;
    else if (expression[operation_pos] == '-')
        int_answer = num1 - num2;
    else
        int_answer = num1 * num2;

    cout << get_number_representation(int_answer);

    return 0;
}