//Write a program to display reverse of array elements. (1-D)
#include<stdio.h>
int main() {
    int a[5],i,j;
   printf("Enter the five values interger :\n");
    for (i = 0; i <=4; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Reverse of the Array\n");
    for (j = 4; j >= 0; j--)
    {
        printf("%d ",a[j]);
    }
    return 0;
}