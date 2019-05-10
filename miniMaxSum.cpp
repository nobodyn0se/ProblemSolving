#include<stdio.h>
int main() {
    long int a[5],j,tmp;
    for(int i=0;i<5;i++) {
        scanf("%li", &a[i]);
    }
    for(int i=0;i<5;i++){
        for(j=i;j<5;j++) {              //sorting in ascending order
            if(a[i]>a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    long int sum1 = 0, sum2 = 0;
    for(int i=0;i<4;i++) {              //lowest sum
        sum1 += a[i];
    }
    printf("%li",sum1);

    for(int i=0, j=4;i<5/2;i++,j--) {
            tmp = a[i];
            a[i] = a[j];                //ascending array now reversed 
            a[j] = tmp;
    }
    for(int i=0;i<4;i++) {              //greatest sum
        sum2+=a[i];
    }
    printf(" %li",sum2);
    return 0;
}   
