//write a program to print he odd number 1 to 20.
#include<stdio.h>
int main() {
    int i;
    for (i = 0; i <=20; i++)
    {
        if (i%2 !=0)
        {
            printf("%d \n",i);
        }
    }
    return 0;
}