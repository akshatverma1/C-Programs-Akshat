#include<stdio.h>
int main() {
    int marks[3];
    printf("Enter the chemistry marks\n");
    scanf("%d",&marks[0]);
    printf("Enter the physics marks\n");
    scanf("%d",&marks[1]);
    printf("Enter the maths marks\n");
    scanf("%d",&marks[2]);
    printf("Marks of chemistry - %d,Marks of physics - %d,Marks of maths - %d",marks[0],marks[1],marks[2]);
    return 0;
}