#include <stdio.h>
int main() {
    int age = 33;
    int *ptr = &age;
    //int **ptrr = &ptr;
    ptr++;
    printf("%d",ptr);
    //printf("My name is akshat verma");

    return 0;
}