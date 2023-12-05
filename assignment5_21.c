/*wap to input a 5 digit number and find
a) Reverse of the number
b) Sum of the digits of the number */

#include<stdio.h>
int main() {
    
    int a;
    printf("Enter the 5 digit number : \n");
    scanf("%d",&a);
    if (a<=99999)
    {
        /* code */
    }
    else {
        printf("Enter only 5 digits number");
    }
    return 0;
}