#include<stdio.h>
#include<stdlib.h>
int main() { 
    int n,k,sum = 0, ch, o, d;
    scanf("%d %d", &n, &k);
    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if(i==k)
            continue;
        else
            sum += a[i];
    }
    scanf("%d", &o);
    ch = sum/2;
    d = abs(ch - o);
    if(d == 0) 
        printf("Bon Appetit");
    else    
        printf("%d",d);
    return 0;
}
