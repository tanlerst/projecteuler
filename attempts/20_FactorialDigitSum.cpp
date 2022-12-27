#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<long> digits;
  digits.push_back({1});
  long sum = 0;
  long carry = 0;
  for (int i = 0; i < 100; i++) {
    long size = digits.size();
    for (long j = 0; j < size; j++) {
      digits[j] = (digits[j] * (i+1)) + carry;
      carry = 0;
      if (digits[j] > 9) {
        carry = digits[j]/10;
        digits[j] %= 10;
      }
    }
    while (carry != 0) {
      digits.push_back({carry%10});
      carry /= 10;
    }
  }
  for (long i = 0; i < digits.size(); i++) {
    sum += digits[i];
  }
  cout << sum << endl;
}
