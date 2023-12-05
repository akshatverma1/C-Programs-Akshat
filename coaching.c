#include<stdio.h>
int main() {
    int age = 43;
    int *ptr = &age;
    int **pptr = &ptr; 
    printf("%u\n",&ptr);
    printf("%u",pptr);
    return 0; 
}