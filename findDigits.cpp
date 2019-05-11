#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int testCase, rem, n;
  cin >> testCase;
  int *numbers = (int *)malloc(testCase * sizeof(int));
  int *count = (int *)malloc(testCase * sizeof(int));
  for (int i = 0; i < testCase; i++) {
    cin >> numbers[i];
    count[i] = 0;
  }
  for (int i = 0; i < testCase; i++) {
    n = *(numbers + i);
    while (n != 0) {
      int q = n % 10; // get the units place
      if (q == 0) {
        n /= 10;
        continue;
      }

      rem = *(numbers + i) % q; // find remainder
      if (rem == 0)
        count[i]++;
      n /= 10;
    }
  }
  free(numbers);
  for (int i = 0; i < testCase; i++)
    cout << count[i] << endl;
  free(count);

  return 0;
}
