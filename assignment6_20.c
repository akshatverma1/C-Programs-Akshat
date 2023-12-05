//Write a program to swap any two position elements in the 1-D and 2-D 
//Array.-
#include<stdio.h>
int main() {
    int a[4];
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    int x = a[0];//x= 1
    a[0]=a[1];//a[0]=2
    a[1] = x;//a[1]=1
    printf("%d %d",a[0],a[1]);
    return 0;
}