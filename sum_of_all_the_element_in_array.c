#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, sum = 0;
    int *a;

    printf("Enter the size of array A:\n");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

  
    if (a == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", a + i);
    }


    for (i = 0; i < n; i++) {
        sum += *(a + i);
    }

    printf("Sum of all elements in array = %d\n", sum);


    free(a);

    return 0;
}
