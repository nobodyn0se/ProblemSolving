#include<stdio.h>
int main() {
    int n; //counts leap year in the calculations
    int y,sum,d;
    scanf("%d",&y);
    if(y>1918) {
        if(y%4==0) {
            if(y%100==0) {
                if(y%400==0) 
                    n = 29;
                else            //finds out if the year is leap and assigns Feb days to 29
                    n = 28;
            }
            else
                n = 29;
        }
        else
            n = 28;
    }
    else if(y<1918) { 
        if(y%4==0) 
            n = 29;
        else    
            n = 28;
    }
    else 
        n = 15;

    sum += 5*31 + 2*30 + n;
    d = 256 - sum;              //difference is the date in Sept 
    printf("%d.09.%d",d,y);
    return 0;
}
