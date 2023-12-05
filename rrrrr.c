#include<stdio.h>
void main() {
    int *ptr;
    int x;
    ptr = &x;
    *ptr = 0;
    printf("x = %d\n",x);
    printf("*ptr = %d \n",*ptr);
    *ptr +=5;
    printf("x = %d\n",x);
    printf("*ptr = %d \n",*ptr);
    (*ptr)++;
    printf("x = %d\n",x);
    printf("*ptr = %d \n",*ptr);
}