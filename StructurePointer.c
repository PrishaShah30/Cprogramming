#include <stdio.h>
// structure using pointer 
struct Students{
    char name[30];
    int maths;
    int science;
    int english;
    float percentage;
};

int main(){
    struct Students x; 
    struct Students *s =  &x;
    printf("Your Name:");
    scanf("%s",&s->name);

    printf("Your marks for maths:");
    scanf("%d",&s->maths);
    printf("Your marks for english");
    scanf("%d",&s->english);
    printf("Your marks for science");
    scanf("%d",&s->science);

    s->percentage = (s->maths+s->english+s->science)/3;
    printf("Name: %s",s->name);
    printf("\nYour Percentage:%f",s->percentage);
}