#include<stdio.h>
//include<stdio.h>
int main() {
    int a[9],i;
    printf("Enter the value of :\n");
    scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
    printf("The value of Odd numbers :\n");
    for (i = 0; i <10; i++)
    {
        if (a[i]%2 != 0)
        {
            printf("%d\n",a[i]);
        }
        
    }
    return 0;
}