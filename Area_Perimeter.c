/*Given the length and breadth of a rectangle,WAP
 to find whether the area of the rectangle is rectangle
 is greater than its perimeter*/
 #include <stdio.h>
 int main()
 {
    int l;
    int b;
    printf("Enter length:");
    scanf("%d",&l);
    printf("Enter breadth:");
    scanf("%d",&b);
    int area=l*b;
    int perimeter=2*(l+b);
    if(area>perimeter){
      printf("Area is greater than perimeter");  
    }
    if(area<perimeter){
      printf("Area is smaller than perimeter");  
    }
    if(area==perimeter){
        printf("Area is equal to perimeter");
    }
    return 0;



 }