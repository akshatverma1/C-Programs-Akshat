#include<stdio.h>
int main() {
    float a,price[3],b,c;
    printf("Enter the first item price\n");
    scanf("%f",&price[0]);
    printf("Enter the second item price\n");
    scanf("%f",&price[1]);
    printf("Enter the third item price\n");
    scanf("%f",&price[2]);
    a = (price[0]+price[1]+price[2]);
    b = (a*0.18);
    c = (a+b);
    printf("%f %f",c,b);
    return 0;
}