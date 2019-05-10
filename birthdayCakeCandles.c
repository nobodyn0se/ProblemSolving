#include<stdio.h>
int main() {
    int n, count =0,i,grt = 0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++) {
        scanf("%d",&a[i]);      //input an array
    }
    grt = a[0];

    for(i=0;i<n;i++) {          //find the greatest num first
        if(grt < a[i]) 
            grt = a[i];
        }
    for(i=0;i<n;i++) {
        if(a[i] == grt) 
            count++;                //count the frequency of the greatest num
    }
    printf("%d",count);
    return 0;
}
