#include<stdio.h>
int main() {
printf("1D Array are used\n");
    int a[10];
    printf("Enter the value of :\n");
    scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
    printf("The value of even numbers :\n");
    for (int i = 0; i <=9; i++)
    {
        if (a[i]%2 == 0)
        {
            printf("%d\n",a[i]);
        }
        
    }
    printf("2D Array are used\n");
    int b[2][5],j;
    printf("Enter the value of :\n");
    scanf("%d %d %d %d %d %d %d %d %d %d",&b[0][0],&b[0][1],&b[0][2],&b[0][3],&b[0][4],&b[1][0]
    ,&b[1][1],&b[1][2],&b[1][3],&b[1][4]);
    printf("The value of even numbers :\n");
    for (int i = 0; i <=1; i++)
    {
        for (j = 0; j <=4; j++)
        {
        if ((b[i][j])%2 == 0)
            {
                printf("%d\n",b[i][j]);
            }
        }
    }
    return 0;
}