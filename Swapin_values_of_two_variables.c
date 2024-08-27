#include <stdio.h>

int main() {
    int a, b, temp;

    a = 5;
    b = 10;

    
    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping with third variable: a = %d, b = %d\n", a, b);

    return 0;
}
