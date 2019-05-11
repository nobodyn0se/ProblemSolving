#include<iostream>
using namespace std;
int main() {
    int n,i,count=0,j,tmp;
    cin >> n;
    int *a = (int*) malloc(n * sizeof(int));
    for(i=0; i<n; i++)
        cin >> a[i];
    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(a[j] > a[j+1]) {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                count++;
            }
        }
    }
    free(a);
    cout << count;
    return 0;
}