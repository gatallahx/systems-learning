#include <stdio.h>

int main(void){
    printf("Enter a 24-hour time: ");
    
    int h,m;
    scanf("%d:%d",&h,&m);
    h%=100; m%=100;

    int am = h < 12; 
    if (h != 12) h%=12;
    if (h==0) h=12;

    printf("Equivalent 12-hour time: %.2d:%.2d ",h,m);
    am ? printf("AM") : printf("PM");
}