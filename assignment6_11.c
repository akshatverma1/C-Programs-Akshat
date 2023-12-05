//Write a program to print even positions numbers in the 10 elements array. (using 1D)
#include<stdio.h>
void main() {
    int a[10];
    printf("Enter the value of :\n");
    scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
    printf("The value of even numbers :\n");
    for (int i = 0; i <=9; i++)
    {
        if (a[i]%2 == 0)
        {
            //printf("%d\n",a[i]);
            printf("%d\n",i);
        }   
    }
}