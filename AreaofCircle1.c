//Area of circle
#include <stdio.h>
int main()
{
    float radius;
    printf("Enter the value of radius : ");
    scanf("%f",&radius);
    float pi = 3.14;
    float area = pi * radius * radius ;
    printf("area of the circle is :%f",area);
    return 0;
    

}