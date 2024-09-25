#include<stdio.h>

int main() {
    int var1 = 1;
    int var2 = 2;
    int var3 = 3;
    int *ptr[3];

    ptr[0] = &var1;  
    ptr[1] = &var2;  
    ptr[2] = &var3;  

    for (int i = 0; i < 3; i++) {
        printf("value at ptr[%d] = %d\n", i, ptr[i]);  
    }

    return 0;
}
