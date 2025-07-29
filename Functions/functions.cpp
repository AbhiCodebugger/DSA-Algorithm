#include <iostream>
using namespace std;

// int sumOfDigit(int num){
//     int digitSum = 0;
//     while(num > 0){
//        int lastDigit = num % 10;
//        cout << "Last Digit: " << lastDigit << endl; // Debugging output
//         num = num / 10;
//         cout << "Remaining Number: " << num << endl; // Debugging output
//         digitSum += lastDigit;
//     }
//     return digitSum;
// }

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int a = factorial(n);
    int b = factorial(r);
    int a_b = factorial(n - r);
    return a / (b * a_b);
}

int main()
{
    // int number;
    // cout << "Enter a number: ";
    // cin >> number;
    // int result = sumOfDigit(number);
    // cout << "The sum of the digits is: " << result << endl;

    int n, r;
    cout << "Enter n and r for nCr: ";
    cin >> n >> r;
    int combination = nCr(n, r);
    cout << "nCr(" << n << ", " << r << ") = " << combination << endl;
    return 0;
}
