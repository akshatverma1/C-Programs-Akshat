//WAP to multiply numbers from 1 to n (n value is given by user).
#include<stdio.h>
int main() {
    int i,n,mul = 1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        mul = mul*i;
    }
    printf("%d\n",mul);
    
    return 0;
}