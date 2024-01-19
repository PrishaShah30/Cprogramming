#include <stdio.h>
#include <stdlib.h>
int main(){
    // take 5 num and print them 
    int *b;
    int a[5];
    b=calloc(5,sizeof(int)); //size 4 
    for(int i=0; i<5;i++){
        printf("\nYour number:");
        scanf("%d",&b[i]);

        printf("Number you gave: %d",b[i]);
    }   
    free(b);
}