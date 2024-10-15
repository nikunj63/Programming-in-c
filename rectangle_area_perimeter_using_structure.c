#include<stdio.h>
struct rectangle 
{
    float length;
    float width;
};
int main(){
    struct rectangle rect;
    printf(" Enter length and width");
    scanf("%f %f",&rect.length,&rect.width);

    float area = rect.length * rect.width;
    float perimeter = 2 * (rect.length + rect.width);

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;

    
}