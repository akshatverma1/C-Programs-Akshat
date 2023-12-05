//Write a program to display multiplication of 2 matrices. (2-D).
#include<stdio.h>
int firstmatrix();
int secondmatrix();
int a[3][3],b[3][3],i,j,k,l;

void main() {
    firstmatrix();
    printf("Enter the value of second matrix :\n");
    secondmatrix();
    printf("The Multiplication of the two matrix is : \n");
    printf("%d %d\n",(a[1][1]*b[1][1])+(a[1][2]*b[2][1]),(a[2][1]*b[1][1])+(a[2][2]*b[2][1]));
    printf("%d %d\n",(a[1][1]*b[1][2])+(a[1][2]*b[2][2]),(a[2][1]*b[1][2])+(a[2][2]*b[2][2]));
    
}

int firstmatrix() {
    for (i = 1; i <=2; i++)
    {
        for (j = 1; j <=2; j++)
        {
            scanf("%d",&(a[i][j]));
        }   
    }
    printf("%d %d\n",a[1][1],a[1][2]);
    printf("%d %d\n",a[2][1],a[2][2]);
}
int secondmatrix() {
    for (k = 1; k <=2; k++)
    {
        for (l = 1; l <=2; l++)
        {
            scanf("%d",&(b[k][l]));
        }   
    }
    printf("%d %d\n",b[1][1],b[1][2]);
    printf("%d %d\n",b[2][1],b[2][2]);
}