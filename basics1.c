#include <stdio.h>
int main(){
int max=0;
int a[5];

for(int i=0;i<5;i++){
    printf("Give values:");
    scanf("%d",&a[i]);
}

for(int i=0;i<5;i++){
    if(a[i]>max){
        max=a[i];
    }
}
printf("%d",max);
}
