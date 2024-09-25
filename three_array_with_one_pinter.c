#include<stdio.h>
int main (){
    int array1[5] = {1, 2, 3, 4, 5};
    int array2[5] = {6, 7, 8, 9, 10};
    int array3[5] = {11, 12, 13, 14, 15};

    int *ptr;
    ptr = array1;
    printf("The first element of array1: %d\n", *ptr);
    
    return 0;
}