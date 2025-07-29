#include<iostream>
using namespace std;

int sumOfDigit(int num){
    int digitSum = 0;
    while(num > 0){
       int lastDigit = num % 10;
        num = num/ 10;
        digitSum += lastDigit;
    }
    return digitSum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int result = sumOfDigit(number);
    cout << "The sum of the digits is: " << result << endl;
    return 0;
}
