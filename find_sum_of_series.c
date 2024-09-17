#include <stdio.h>

double sumseries(int m); 

int main() {
    int number; 
    double sum;
    printf("\n Enter the value: ");
    scanf("%d", &number); 
    sum = sumseries(number);
    printf("\n Sum of the above series = %lf\n", sum);
    return 0;
}

double sumseries(int m) {
    double sum2 = 0, f = 1;
    
    for (int i = 1; i <= m; i++) {
        f = f * i;   
        sum2 = sum2 + (1.0 / f);  
    }
    return sum2;
}
