#include<stdio.h>
#include<stdlib.h>
int main()
{
    int regd;
    char name[20],branch[20],hobby[150];
    printf("Enter your name: ");
    gets(name);
    printf("\n Enter your branch : ");
    gets(branch);
    
    printf("\n Enter your hobbies: ");
    gets(hobby);
    printf("\n Enter regd. no (last 3 digits) : ");
    scanf("%d", &regd);
    printf("your name is :  %s ",name);
    printf("your registration number is :   %d ",regd );
    printf(" your branch is :  %s  ",branch);
    printf("your hobbies are  : %s  ",hobby);
    return 0;
}
