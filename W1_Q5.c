#include<stdio.h>
int main()
{
    float radius,diameter,circumference,area;
    printf("enter value for radius  :   ");
    scanf("%f" ,&radius);
    diameter=2*radius;
    circumference=2*3.14*radius;
    area=3.14*radius*radius;
    printf("the diameter of circle   :    %f" ,diameter);
    printf("the cicumference of circle   :    %f" ,circumference);
    printf("the area of circle   :  %f  " ,area );

    return 0;
}