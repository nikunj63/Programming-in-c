#include<stdio.h>
int main(){
    int n1,n2,n3,large;
    printf("Enter all three numbers\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    if (n1>n3)
    {
    printf("n1 is large");
    }if (n1<n3)
    {
       printf("n3 large");
    }else{
        printf("n2 is large");
    }
    
    
}