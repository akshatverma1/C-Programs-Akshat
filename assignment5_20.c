//20.WAP to print all character with corresponding ASCII values
#include<stdio.h>
int main() {
    char i;
    for (i = 'a'; i <='z'; i++)
    {
        printf("The ASCII value of %C : ",i);
        printf("%d\n",i);
    }
    return 0;
}