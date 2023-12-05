#include<stdio.h>
int main() {
    int leap;
    printf("Enter Year");
    scanf("%d",&leap);

    if (366>=leap)
    {
        printf("This ia a leap Year");
    }

    else {
        printf("The is a not leap year \n");
        
        }
    

    return 0;
}