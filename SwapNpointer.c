#include <stdio.h>

void Swap(int *a, int *b){
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}
// pointer 
int main(){
    // a=20
    // b=40 
    int a =20;
    int b =40;
    //Swap new = s Swap();
  //  Swap(a,b); ->pass by value 
    Swap(&a,&b); // pass-call by ref 
    printf("a= %d \nb= %d",a,b);
}