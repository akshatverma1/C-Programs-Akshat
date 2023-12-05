//keep taking number as input from user util user enters a number which is multiple of 7 ?
#include<stdio.h>
int main() {
    int a;
    do
    {
    printf("Enter Any Number \n");
    scanf("%d",&a);
    if (a%7 ==0)
    {
        printf("it's a mutiple of seven \n");
    }
    else {
        printf("it's not a multiple of seven \n");
    }
    } while (a%7 ==0);
    return 0;
}