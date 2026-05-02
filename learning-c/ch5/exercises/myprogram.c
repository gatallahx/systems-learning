#include <stdio.h>

int main(void){
    printf("\nExercise #5\n");
    int n=0;
    if (n >= 1 <= 10)
        printf("passed condition");

    printf("\nExercise #3\n");
    int i, j, k, expression;

    i=3; j=4; k=5;
    expression= i < j || ++j < k;
    printf("%d ",expression);
    printf("%d %d %d",i,j,k);
    printf("\n");
    
    i=7; j=8; k=9;
    expression= i - 7 && j++ < k;
    printf("%d ",expression);
    printf("%d %d %d",i,j,k);
    printf("\n");
    
    i=7; j=8; k=9;
    expression= (i = j) || (j = k);
    printf("%d ",expression);
    printf("%d %d %d",i,j,k);
    printf("\n");
    
    i=1; j=1; k=1;
    expression= ++i || ++j && ++k;
    printf("%d ",expression);
    printf("%d %d %d",i,j,k);
    printf("\n");
}