#include<stdio.h>
#include<stdlib.h>
int main() {
    int ni, c1, c2, m, d1, d2;
    scanf("%d",&ni);
    for(int i=0; i<ni; i++) {
        scanf("%d %d %d",&c1,&c2,&m);
        d1 = abs(c1 - m);
        d2 = abs(c2 - m);
        if(d1<d2) 
            printf("Cat A\n");
        else if(d2<d1)
            printf("Cat B\n");
        else    
            printf("Mouse C\n");
    }
    return 0;
}
