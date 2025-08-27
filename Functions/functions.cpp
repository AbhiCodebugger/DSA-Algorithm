#include <iostream>
using namespace std;

int sumOfDigit(int num){
    int digitSum = 0;
    while(num > 0){
       int lastDigit = num % 10;
       cout << "Last Digit: " << lastDigit << endl; // Debugging output
        num = num / 10;
        cout << "Remaining Number: " << num << endl; // Debugging output
        digitSum += lastDigit;
    }
    return digitSum;
}

int factorial(int num){
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r) {
    int a = factorial(n);
    int b = factorial(r);
    int a_b = factorial(n - r);
    return a / (b * a_b);
}

bool isPrime(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0 ){
            return false;
        }
    }
    return true;
}

int findPrimeNumber(int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(isPrime(i)){
          cout << i << " is Prime" << endl;
          count++;
        }
    }
    return count;
}
int main()
{

    // cout << findPrimeNumber(20) << endl; 
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int result = sumOfDigit(number);
    cout << "The sum of the digits is: " << result << endl;
    // cout << isPrime(12) << endl;
    // int n, r;
    // cout << "Enter n and r for nCr: ";
    // cin >> n >> r;
    // int combination = nCr(n, r);
    // cout << "nCr(" << n << ", " << r << ") = " << combination << endl;
    return 0;
}
