#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;  // Numbers less than or equal to 1 are not prime
    if (num == 2) return true;   // 2 is prime
    if (num % 2 == 0) return false; // Any even number greater than 2 is not prime
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;  // If divisible by any odd number, it's not prime
    }
    return true;  // If no divisors are found, the number is prime
}

// Main function to count primes in a sequence using count_if
int countPrimes(const vector<int>& seq) {
    return count_if(seq.begin(), seq.end(), [](int num) {  // Count elements satisfying the isPrime condition
    return isPrime(abs(num)); 
    });
}

int main() {
    int n;
    cin >> n;  // Read the number of elements in the sequence
    vector<int> seq(n);

    // Read the sequence of numbers
    for (int i = 0; i < n; ++i) {
        cin >> seq[i];
    }

    // Count the prime numbers in the sequence
    int primeCount = countPrimes(seq);

    // Output the result
    cout << primeCount << endl;

    return 0;
}
