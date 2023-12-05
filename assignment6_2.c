//2.Write a program to create 3*4 display all entered elements in Matrix form. (2-D)
#include<stdio.h>
int main() {
    int a[3][4];
    a[0][0] = 23;
    a[1][0] = 34;
    a[2][0] = 22;
    a[0][1] = 44;
    a[0][2] = 67;
    a[1][1] = 98;
    a[1][2] = 78;
    a[2][1] = 55;
    a[2][2] = 66;
    a[0][3] = 56;
    a[1][3] = 90;
    a[2][3] = 89;
    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d",a[0][0],a[0][1],a[0][2],a[0][3],a[1][0],a[1][1]
    ,a[1][2],a[1][3],a[2][0],a[2][1],a[2][2],a[2][3]);

    return 0;
    
}