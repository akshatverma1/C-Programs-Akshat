#include<stdio.h>
int main() {
    int a;
    do
    {
    printf("Enter Any Number \n");
    scanf("%d",&a);
    if (a%2 ==0)
    {
        printf("it's a Even number \n");
    }
    else {
        printf("it's a odd number \n");
    }
    } while (a%2 ==0);
    return 0;
}