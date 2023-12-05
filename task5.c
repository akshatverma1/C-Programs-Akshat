//develop a program that convert a decimal to binary,octal,hexadecimal number.
#include<stdio.h>
int d,f,i;
int binary();
int octal();
int hexadecimal();
int main() {
    int s;
    printf("Enter the Any Decimal Number\n");
    scanf("%d",&d);
    printf("Choice Any to convert\n");
    printf("1 For Decimal Number To Binary Number\n");
    printf("2 For Decimal Number To Octal Number\n");
    printf("3 For Decimal Number To Hexadecimal Number\n");
    scanf("%d",&s);
    switch (s) {
        case 1 : printf("This is a Binary Number\n");
        binary();
        break;
        case 2 : printf("This is a Octal Number\n");
        break;
        case 3 : printf("This is a Hexadecimal Number\n");
        break;
        default : printf("Choice Only This Numbers 1,2 & 3");
    }

    return 0;
}
int binary() {   
    return 0;
}