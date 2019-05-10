#include<stdio.h>
#include<stdlib.h>
int main() {
    int d1,d2,m1,m2,y1,y2,f;
    scanf("%d %d %d",&d1,&m1,&y1);
    scanf("\n%d %d %d",&d2,&m2,&y2);
    if(y1>y2) 
        f=10000;
    else if(m1>m2 && y1==y2) 
        f=500*(m1-m2);
    else if(d1>d2 && m1==m2 && y1==y2)
        f=15*(d1-d2);
    else
        f=0;
    printf("%d",f);
    return 0;
}
