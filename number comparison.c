#include<stdio.h>
int main(){
    int x ,y;
    printf("Enter first number \n");
    scanf("%d",&x);
    printf("Enter second number\n");
    scanf("%d",&y);
    if (x == y)
    {
        printf("Both numbers are equal");
    }else if (x>y)
    {
        printf(" x number is greater than y ");
    }else {
        printf("x is smaller than y ");
    }
    
    
}