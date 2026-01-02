// Area of circle
#include<stdio.h>
#define pi 3.14159
int main()
{
    float radius,area;
    printf("Enter the value of radius: ");
    
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("Area of Circle is: %f\n",area);
    return 0;
}