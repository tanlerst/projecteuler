#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> digits;
  digits.push_back({1});
  long sum = 0;
  int carry = 0;
  for (int i = 0; i < 1000; i++) {
    long size = digits.size();
    for (int j = 0; j < size; j++) {
      digits[j] = (digits[j] * 2) + carry;
      carry = 0;
      if (digits[j] > 9) {
        digits[j] -= 10;
        carry = 1;
      }
    }
    if (carry == 1) {
      digits.push_back({1});
      carry = 0;
    }
  }
  for (int i = 0; i < digits.size(); i++) {
    sum += digits[i];
  }
  cout << sum << endl;
}
