#include<stdio.h>
int main()
{
    int a,b,c,x;
    printf("for addition choose ...1...  \n  for subtraction choose ...2...  \n  for multiplication choose ...3...  \n  for division choose ...4...  \n");
    scanf("%d",&c);
    printf("Enter two numbers you want to do the operation");
    scanf("%d %d" ,&a ,&b);
    switch(c)
    {
        case 1:
            x=a+b;
            printf("the sum of the two numbers is  : %d " ,x);
            break;
        case 2:
            x=a-b;
            printf("the difference of the two numbers is  : %d  " ,x);
            break;
        case 3:
            x=a*b;
            printf("the product of the numbers is  : %d   " ,x);
            break;
        case 4:
            x=a/b;
            printf("the quotient of the numbers is  : %f  " ,x);
            break;
        default:
            printf("please choose from the available options ");

    }
    return 0;
}