#include <iostream>
using namespace std;

int decToBinary(int decimalNumber){
   int ans = 0, pow = 1;
   while(decimalNumber > 0){
    int rem = decimalNumber % 2;
    decimalNumber /= 2;
    ans += (rem * pow);
    pow *= 10;
   }
   return ans;
}

int binaryToDec(int binaryNum){
   int ans = 0, pow = 1;
   while(binaryNum > 0){
      int rem = binaryNum % 10;
      ans += (rem * pow);
      binaryNum /= 10;
      pow *= 2;
   }
   return ans;
}
int main(){
// cout << decToBinary(101) << endl;
cout << binaryToDec(1110101) << endl;
}