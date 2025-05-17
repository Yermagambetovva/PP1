#include <iostream>
#include <string>
using namespace std;
//тройки букв в цифру
int triplettodigit(string triplet){
    if(triplet=="ONE") return 1;
    if(triplet=="TWO") return 2;
    if(triplet=="THR") return 3;
    if(triplet=="FOU") return 4;
    if(triplet=="FIV") return 5;
    if(triplet=="SIX") return 6;
    if(triplet=="SEV") return 7;
    if(triplet=="EIG") return 8;
    if(triplet=="NIN") return 9;
    if(triplet=="ZER") return 0;
    return -1;
}
//цифру в тройку букв
string digittotriplet(int digit) {
    if (digit == 1) return "ONE";
    if (digit == 2) return "TWO";
    if (digit == 3) return "THR";
    if (digit == 4) return "FOU";
    if (digit == 5) return "FIV";
    if (digit == 6) return "SIX";
    if (digit == 7) return "SEV";
    if (digit == 8) return "EIG";
    if (digit == 9) return "NIN";
    if (digit == 0) return "ZER";
    return "";
}
int main() {
    string s;
    cin >> s;
    int plus = s.find('+');
    string part1 = s.substr(0, plus);      //часть до +
    string part2 = s.substr(plus + 1);     //часть после +
    //конвертируем первую часть в число
    int num1 = 0;
    for (int i = 0; i < part1.length(); i += 3) {
        num1 = num1 * 10 + triplettodigit(part1.substr(i, 3));
    }
    //конвертируем вторую часть в число
    int num2 = 0;
    for (int i = 0; i < part2.length(); i += 3) {
        num2 = num2 * 10 + triplettodigit(part2.substr(i, 3));
    }
    int sum = num1 + num2;
    //результат в формате тройки букв
    string result = "";
    do {
        int digit = sum % 10;
        result = digittotriplet(digit) + result;
        sum /= 10;
    } while (sum > 0);

    cout << result << endl;

    return 0;
}


