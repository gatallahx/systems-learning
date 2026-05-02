#include <stdio.h>

int main(void){
    // # 2
    printf("Enter a two-digit number: ");
    int n;
    scanf("%3d",&n);
    printf("The reversal is: %d%d%d",
        n%10,
        (n%100)/10,
        n/100
    );
}