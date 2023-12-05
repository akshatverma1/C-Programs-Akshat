//Write a program to print transpose of matrix.
#include<stdio.h> 
char firstmatrix();
//void secondmatrix();
char a[3][3],b[3][3],i,j,k,l,g,h,r,y[5];

void main() {
    firstmatrix();
    printf("The transpose of the matrix is :\n");
    printf("%c %c\n",a[1][1],a[2][1]);
    printf("%c %c\n",a[1][2],a[2][2]);
}
char firstmatrix() {
    for (i = 1; i <=2; i++)
    {
        for (j = 1; j <=2; j++)
        {
            scanf("%s",&(a[i][j]));
        }   
    }
    printf("%c %c\n",a[1][1],a[1][2]);
    printf("%c %c\n",a[2][1],a[2][2]);
}