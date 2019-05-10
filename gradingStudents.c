#include<stdio.h>
int main() {
    int i,n,mult;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++) {
        if(a[i]<38) 
            printf("%d\n",a[i]);
        else {
            mult = (a[i]/5 + 1)*5;
            if((mult - a[i])<3) 
                printf("%d\n",mult);
            else
                printf("%d\n",a[i]);
        }
        }
    return 0;
}
