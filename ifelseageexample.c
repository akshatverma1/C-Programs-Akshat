#include<stdio.h>
int main() {
    int age;
    printf("Enter Age :-");
    scanf("%d",&age);

    if (age <= 16)
    {
        printf("You Are Adult \n");
        printf("Right To Vote \n");
    }

    else if (age >= 18)
    {
        printf("You are eighteen \n");
    }
    
    else {
        printf("You are not Adultt \n");
    }

    printf("Thanks You");
    
}