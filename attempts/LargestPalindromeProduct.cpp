#include <iostream>
using namespace std;

bool isPalindrome(int num){
  int reversed = 0;
  int original = num;
  while (num!=0){
    int remainder = num%10;
    reversed = (reversed*10)+remainder;
    num /= 10;
  }
  if (original==reversed){
    return true;
  }
  else{
    return false;
  }
}


int main() {
  int largest = 0;
  int product = 0;
  for (int i=999;i>100;i--){
    for (int j=999;j>100;j--){
      product = i*j;
      if (product<largest){
        break;
      }
      else if (isPalindrome(product)==true){
        largest = product;
      }
    }
  }
  cout<<largest<<endl;
}
