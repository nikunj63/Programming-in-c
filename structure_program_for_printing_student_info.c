#include<stdio.h>

int main() {
    struct student {
        char name[80];
        int age;
        float fee;
        int Rollno; 
    };

    struct student stud1;

   
    printf("Enter the name\n");
    scanf("%s", stud1.name);

   
    printf("Enter age\n");
    scanf("%d", &stud1.age);  

    
    printf("Enter fee\n");
    scanf("%f", &stud1.fee);  

  
    printf("Enter Roll no\n");
    scanf("%d", &stud1.Rollno);  

    
    printf("Name: %s\n", stud1.name);
    printf("Age: %d\n", stud1.age);
    printf("Fee: %.2f\n", stud1.fee);
    printf("Roll No: %d\n", stud1.Rollno);

    return 0;
}
