#include<stdio.h>
int main() {
    int x = 15;
    int y = 20;
    int z;
    //z = y++ + x++;
    //printf("%d\n",z);
    //z = ++x + y++;
    //printf("%d\n",z);
    z = y++ + ++y;
    printf("%d",z);
    return 0;
}