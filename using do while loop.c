#include<stdio.h>
int main(){
    int N;
    printf("Enter a number to generate its multiplication table\n");
    scanf("%d",&N);
    int i = 1;
    do
    {
        printf("%d x %d = %d\n",N,i,N*i);
        i++;
    } while (i<=10);
    return 0;
    
}