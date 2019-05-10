#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    long int a[n], sum = 0;
    for(int i=0; i<n; i++) {
        scanf("%li", &a[i]);
        sum = sum + a[i];
    }
    printf("%li",sum);
    return 0;
}
