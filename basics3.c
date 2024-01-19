#include <stdio.h>

int main(){
    //take 50 nums and get min, max and sum 
    int n;
    int max=0;
    int min=0;
    for(int i=0;i<=5;i++){
        printf("Your num: ");
        scanf("%d",&n);

        if(n>max){
            max = n;
        }
        }
        printf("Your max: %d",max);

    for(int i=0;i<=5;i++){
        printf("Your num: ");
        scanf("%d",&n);

        if(n<min){
            min = n;
        }
        }
        printf("Your min: %d",min);

    for(int i=0;i<=5;i++){
        printf("Your num: ");
        scanf("%d",&n);

        if(n>max){
            max = n;
        }
        }
        printf("Your sum: %d",max);
}