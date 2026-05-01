#include <stdio.h>

int main(void){
    printf("\n-----\n");
    printf("For exercise 3 and 4\n");
    // 8/5 = 1.6
    printf("%d\n", 8/5);
    printf("%d\n", -8/5);
    printf("%d\n", 8/-5);
    printf("%d\n", -8/-5);
    
    printf("\n-----\n");
    printf("For exercise 11\n");

    printf("a)\n");
    int i = 1;
    printf("%d ",i++ - 1);
    printf("%d",i);
    
    printf("\nb)\n");
    i = 10; int j = 5;
    printf("%d ",i++ - ++j);
    printf("%d %d",i,j);
    
    printf("\nc)\n");
    i = 7; j = 8;
    printf("%d ",i++ - --j);
    printf("%d %d",i,j);
    
    printf("\nd)\n");
    i = 3; j = 4;
    int k = 5;
    printf("%d ",i++ - j++ + --k);
    printf("%d %d %d",i,j,k);

}