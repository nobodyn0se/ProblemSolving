#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,i;
    cin >> n;
    int *ar = (int*) malloc (n * sizeof(int));
    int *count = (int*) malloc (n * 100);
    for(i=0; i<n; i++)
        count[i] = 0;           //Init all array elements to 0
    for(i=0; i<n; i++) {
        cin >> ar[i];           //Take the array input 
        ++count[ar[i]];         //Store counts in another array
    }
    free(ar);
    for(i=0; i<100; i++)
        cout << count[i] <<" ";
    free(count);
    return 0;
} 