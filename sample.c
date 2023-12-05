#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    ptr++;
    printf("%d\n",ptr);
    return 0;
}