#include<stdio.h>
int main() {
    system("cls");
    char marks[3];
   
    printf("Enter your Eng marks\n");
    scanf("%s",&marks[0]);
    printf("Enter your phy marks\n");
    scanf("%s",&marks[1]);
    printf("Enter your chem marks\n");
    scanf("%s",&marks[2]);
    printf("Eng marks = %d,Phy marks = %d,chem marks = %d",marks[0],marks[1],marks[2]);
    return 0;
}