#include<stdio.h>
int main(){
    int day;
    printf("Enter any number from 1 to 7\n");
    scanf("%d",&day);
    switch (day)
    {
    case 1: printf("\n Sunday");
        break;
        case 2: printf("\n Monday");
        break;
        case 3: printf("\n Tuesday");
        break;
        case 4: printf("\n Wednesday");
        break;
        case 5: printf("\n Thursday");
        break;
        case 6: printf("\n Friday");
        break;
        case 7: printf("\n Saturday");
        break;
        
      
    
    default: printf("\n Large number");
        
    }
}