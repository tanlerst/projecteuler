#include <iostream>
using namespace std;

long lcm(long a, long b){
  int result = min(a,b);
  while (result>0){
    if (a%result==0 && b%result==0){
      break;
    }
    result--;
  }
  return result;
}

int main() {
  long multiple = 1;
  for (int i=1;i<21;i++){
    multiple = (i*multiple)/lcm(i,multiple);
    
  }
  cout<<multiple<<endl;
}
