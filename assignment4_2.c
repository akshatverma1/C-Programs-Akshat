#include<stdio.h>
void main() {
    int a,b,c;
    int g;
    system("cls");
    printf("Enter Your First Value \n");
    scanf("%d",&a);
    printf("Enter Your Second Value \n");
    scanf("%d",&b);
    printf("1 for SUM \n");
    printf("2 for MULIPLICATION \n");
    printf("3 for DIVIDE \n");
    printf("4 for Minus \n");
    scanf("%d",&g);
    
    switch (g)
    {
        case 1 : c = (a + b);
        printf("The sum is : %d",c);
        break;
        case 2 : c = (a * b);
        printf("The Multiplication is : %d",c);
        break;
        case 3 : c = (a / b);
        printf("The Divided is : %d",c);
        break;
        case 4 : c = (a - b);
        printf("The Minus is : %d",c);
        break;
        default : printf("unknown");

    }
}