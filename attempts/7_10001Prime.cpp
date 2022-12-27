#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long n){
  bool prime = true;
  for (long i=sqrt(n);i>1;i--){
    if (n%i==0){
      prime = false;
      break;
    }
  }
  return prime;
}


int main() {
  long largePrime = 0;
  int counter = 0;
  long num = 2;
  while (counter<10001){
    if (isPrime(num)==true){
      largePrime = num;
        counter += 1;
    }
    num += 1;
  }
  cout<<largePrime<<endl;
}
