#include<stdio.h>
int main() {
    long int b,k,u,max = -1,sum = 0; //budget, keyboard, usb
    scanf("%li %li %li", &b,&k,&u);
    long int ka[k], ua[u],i,j;
    for(i=0; i<k; i++)  
        scanf("%li",&ka[i]);     //input keyboard array
    for(i=0; i<u; i++)  
        scanf("%li",&ua[i]);        // input usb array
    for(i=0; i<k; i++) {
        for(j=0;j<u;j++) {
            sum = ka[i] + ua[j];        //sums up and finds the maximum
            if(sum > max && sum <= b)        //constraints
                max = sum;                  //sets  the output var max to the sum
        }
    }
    printf("%li",max);
    return 0;
}
