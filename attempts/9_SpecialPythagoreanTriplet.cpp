#include <iostream>
using namespace std;

int main() {
  int a,b,c;
  for (int i=1;i<(1001/3);i++){
    for (int j=1;j<(1001/2);j++){
      int k = 1000-i-j;
      if ((i*i)+(j*j)==(k*k)){
        a=i;
        b=j;
        c=k;
        break;
      }
    }
  }
  cout<<a<<'*'<<b<<'*'<<c<<"="<<a*b*c<<endl;
}
