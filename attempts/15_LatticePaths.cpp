#include <iostream>
using namespace std;

long lattice[21][21];

int main(){

  for (int i=0;i<21;i++){
    for (int j=0;j<21;j++){
      if (i==0 && j==0){
        lattice[i][j] = 1;
      }
      else{
        long up;
        long left;
        if (i==0){
          up = 0;
        }
        else{
          up = lattice[i-1][j];
        }
        if (j==0){
          left = 0;
        }
        else{
          left = lattice[i][j-1];
        }
        lattice[i][j] = left+up;
      }
    }
  }
  cout<<lattice[20][20]<<endl;
}
