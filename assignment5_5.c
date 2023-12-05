//write to print all odd values from 1 to n;
#include<stdio.h>
int main() {
    int i,n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for (i = 0; i <=n; i++)
    {
        if (i%2 !=0)
        {
            printf("%d \n",i);
        }
        
    }
    
    return 0;
}