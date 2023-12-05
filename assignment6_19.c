//Write a program to print diagonal matrix (2-D)
#include<stdio.h>
int firstmatrix();
int secondmatrix();
int a[3][3],b[3][3],i,j;
void main() {
    firstmatrix();
}

int firstmatrix() {
    for (i = 1; i <=3; i++)
    {
        for (j = 1; j <=3; j++)
        {
            scanf("%d",&(a[i][j]));
            if (i!=j)
            {
                a[i][j]=0;
            }
        }      
    }
    printf("This is a Digonal Matrix\n");
    printf("%d %d %d\n",a[1][1],a[1][2],a[1][3]);
    printf("%d %d %d\n",a[2][1],a[2][2],a[2][3]);
    printf("%d %d %d\n",a[3][1],a[3][2],a[3][3]);   
}
    
    
