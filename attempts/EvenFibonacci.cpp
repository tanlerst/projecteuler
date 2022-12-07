#include <iostream>
using namespace std;

int main() {
  int sum = 2;
  int num1 = 2;
  int num2 = 1;
  int fibo = 3;
  while (fibo<4000000){
    if (fibo%2==0){
      sum += fibo;
    }
    if (num1<num2){
      num1 = fibo;
    }
    else{
      num2 = fibo;
    }
    fibo = num1+num2;
  }
  cout<<sum<<endl;
}
