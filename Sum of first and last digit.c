#include<stdio.h>
int main(){
    int n,f,I,sum,num,d=1;
    printf("Enter a number:");
    scanf("%d",&n);
    num = n;
    while(num!=0){
        num = num/10;
        d = d*10;
    }
    d = d/10;
    f = n/d;
    I = n%10;
    sum = f+I;
    printf("Sum of first and last digit of %d is : %d",n,sum);
}