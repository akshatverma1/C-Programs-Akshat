/*wap to input a 5 digit number and find
a) Reverse of the number
b) Sum of the digits of the number */

#include<stdio.h>
int main() {
    system("cls");
    int a[5];
    printf("Enter the 5 digit number :\n");
    scanf("%d %d %d %d %d\n",&a[0],&a[1],&a[2],&a[3],&a[4]);
    printf("%d %d %d %d %d \n",a[4],a[3],a[2],a[1],a[0]);
    //second part of question
    printf("Total Sum of Numbers %d",a[4]+a[3]+a[2]+a[1]+a[0]);
    return 0;
}