#include<stdio.h>
int main()
{
    float b,h,area;
    printf("Enter base length of the triangle: ");
    scanf("%f",&b);
    printf("Enter height of the triangle: ");
    scanf("%f",&h);
    area=0.5*b*h;
    printf("Area of triangle=%f",area);
}

