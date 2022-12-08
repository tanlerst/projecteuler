#include <iostream>
using namespace std;

int main() {
  long squaresum = 0;
  long sumsquares = 0;
  for (long i=1;i<101;i++){
    squaresum += i;
    sumsquares += (i*i);
    
  }
  squaresum = squaresum * squaresum;
  long difference = squaresum - sumsquares;
  cout<<difference<<endl;
}
