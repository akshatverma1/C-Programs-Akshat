//create a structure to store a vector. then make a function sum of two vector.
#include<stdio.h>

typedef struct vector{
    int x[2];
    int y[2];
}ve; 

int main() {
    ve d[2];
    printf("Enter the value of the x1,y1\n");
    scanf("%d\n",&(d[0].x[0]));
    scanf("%s",&(d[0].y[0]));
    printf("Enter the value of the x2,y2\n");
    scanf("%s\n",&(d[1].x[1]));
    scanf("%s",&(d[1].y[1]));

}
