//WAP to multiply numbers from 1 to 10.
#include<stdio.h>
int main() {
    int i,mul = 1;
    for (i = 1; i <=10; i++)
    {
        mul = mul*i;
    }
    printf("%d\n",mul);
    return 0;
}