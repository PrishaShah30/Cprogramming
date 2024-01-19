#include <stdio.h>

struct Students{
    char name[30];
    int maths;
    int science;
    int english;
    float percentage;
};

int main(){
    struct Students s[3]; //s is here a member of the structure 
    for(int i=0;i<3;i++){
        printf("\nYour Name: ");
        scanf("%s",&s[i].name);

    printf("Your marks for maths: ");
    scanf("%d",&s[i].maths);
    printf("Your marks for english: ");
    scanf("%d",&s[i].english);
    printf("Your marks for science: ");
    scanf("%d",&s[i].science);

    s[i].percentage = (s[i].maths+s[i].english+s[i].science)/3;
    printf("Name: %s",s[i].name);
    printf("\nYour Percentage: %f",s[i].percentage);
    }
    
}