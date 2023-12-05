#include<stdio.h>
int main() {
    int a;
    printf("Enter the Any Number in Positive Negative or Zero \n");
    scanf("%d",&a);
    if (a == 0)
    {
        printf("It's Zero");
    }
    else if (a>0)
    {
        printf("It's Positive");
    }
    else if (a<0)
    {
        printf("It's Negative");
    }
    else {
        printf("Unvalid value");
    }
    
    
    
    return 0;
}