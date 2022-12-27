#include <iostream>
using namespace std;

int maxLength[1000001];
int chain(long num){
  int length = 0;
  if (num==1){
    length = 1;
  }
  else{
    if (num%2==0){
      if ((num/2)<1000000 && maxLength[(num/2)]!=NULL){
        length = maxLength[(num/2)]+1;
      }
      else{
        length = 1+chain(num/2);
      }
    }
    else{
      if ((num*3+1)<1000000 && maxLength[num*3+1]!=NULL){
        length = maxLength[num*3+1]+1;
      }
      else{
      length = 1 + chain((3*num)+1);
      }
    }
  }
  if (num<1000001){
    maxLength[num] = length;
  }
  return length;
}

int main() {

  int maxLength = 0;
  int max;
  for (int i=1;i<1000001;i++){
    int length = chain(i);
    if (length>maxLength){
      maxLength = length;
      max = i;
    }
  }
  cout<<max<<endl;
}
