#include <iostream>
using namespace std;

int main() {
  bool isPrime[2000001];
  isPrime[0] = false;
  isPrime[1] = false;
  long sum = 0;
  for (int i=2;i<2000001;i++){
    isPrime[i] = true;
  }
  for (long i=2;i<2000001;i++){
    if (isPrime[i]==true){
      sum += i;
      for (long j=(i*i);j<2000001;j+=i){
        isPrime[j] = false;
      }
    }
  }
  cout<<sum<<endl;
}
