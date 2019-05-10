#include<stdio.h>
int main () {
    int x1,x2,v1,v2;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    while(1) {
        if(((x1>x2) && (v1>v2)) || ((x2>x1) && (v2>v1)) || v1 == v2) {
            printf("NO");
            break; }
        if((x1 += v1) == (x2 += v2)) {
            printf("YES");
            break; }
    }
    return 0;
}
