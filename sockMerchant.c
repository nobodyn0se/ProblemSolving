#include<stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n], count[101] = {0}, pair = 0;
    for(i=0; i<n; i++) {
        scanf("%d",&a[i]);
        count[a[i]]++;
    }
    for(i=1; i<101; i++) {
        if(count[i] != 0)
            pair += count[i]/2;
    }
    printf("%d",pair);
    return 0;
}
