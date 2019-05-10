#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,i,j,sum1=0,sum2=0,d;
    scanf("%d",&n);
    int a[n][n];
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d",&a[i][j]);        //inputting a 2d array
            if(i==j)
                sum1 += a[i][j];        //sums up the 1st diagonal
        }
    }
    for(i=0; i<n; i++) {
        for(j=i+n-1; j>=0; j--) {
            if(j==(n-i-1)) 
                sum2 += a[i][j];            //summing up the 2nd diagonal
            } 
        }
    d = abs(sum1 - sum2);
    printf("%d",d);
    return 0;
}
