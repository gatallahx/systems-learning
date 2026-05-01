#include <stdio.h>

int main(void){
    int rad;
    scanf("%d",&rad);

    printf("The volume is %f", 
        (4.0f/3.0f) * 3.14 * rad * rad * rad 
    );
}

/*  4 and 3 specified as floats so that
    4 divided by 3 doesn't return an integer
*/