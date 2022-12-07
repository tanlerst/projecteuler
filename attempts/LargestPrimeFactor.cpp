#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int largest = 1;
  long long num = 600851475143;
  for (int i=2;i<round(sqrt(num));i++){
    while (num%i==0){
      num = num/i;
      largest = i;
    }
  }
  if (num>largest){
    largest = num;
  }
  cout<<largest<<endl;
}
