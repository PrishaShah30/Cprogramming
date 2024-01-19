#include <stdio.h>
// #include <conio.h>
int main(){
    int x=0,y,z;
    int a[5]; // char holds only one 
    // printf("Give you values to add:");
    // scanf("%d%d",&x,&y);
    // z=x+y;
    // printf("Answer: %d",z);

    //------------------------------------------------------------------------------

//     printf("Give a value to check if odd or even:");
//     scanf("%d",&x);
//     if(x%2!=0){
//         printf("The value is an odd number");
//     }
//     else{
//         printf("The value is an even number");
//     }

    //------------------------------------------------------------------------------

    // printf("What is your name:");
    // scanf("%s",&a);
    // printf("Give the value of x:");
    // scanf("%d",&x); 
    // //gets(x);
    // while(x!=0){
    //     printf("%s",a);
    //     x--;
    // }
    
    //------------------------------------------------------------------------------
    for(int i=0; i<5;i++){
        printf("Give 5 values: ");
        scanf("%d",&a[i]);
    }
    for(int i=0; i<5;i++){ // 1+2+3+4+5 // 0+1+2+3+4
        x=x+a[i];// 0+1 = x ; x+a[i+1]
        }
    printf("%d",x);
    }