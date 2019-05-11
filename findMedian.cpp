#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n, j, i, tmp, med;
  cin >> n;
  int *a = (int *)malloc(n * sizeof(int));
  for (i = 0; i < n; i++)
    cin >> a[i];
  sort(a , a + n);
  med = a[n/2];
  cout << med;
  free(a);
  return 0;
}