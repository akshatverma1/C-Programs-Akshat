#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr;
    ptr = (int *)calloc(4,sizeof(int));
    ptr[0] = 1;
    ptr[1] = 1;
    ptr[2] = 1;
    ptr[3] = 1;
    //ptr[4] = 1;
    realloc(ptr,3);
    ptr[4] = 6;
    printf("%d %d %d %d %d",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4]);
        return 0;
}