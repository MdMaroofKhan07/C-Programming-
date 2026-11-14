#include <stdio.h>

float func(int s1,int s2,int s3,int s4,int s5)
{
    return (float)(s1+s2+s3+s4+s5)/5;
}
int main()
{
    float percentage;
    int s1,s2,s3,s4,s5;
    printf("Enter the marks obtained in 5 subjects : ");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);

    percentage = func(s1,s2,s3,s4,s5);
    printf("The percentage of student is : %f",percentage);

    return 0;
}