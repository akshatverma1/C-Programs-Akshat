//WAP to add numbers from 1 to n (n value is given by user)
#include<stdio.h>
int main() {
    int i,n;
    int sum=0;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        //printf("%d \n",i);
        sum = (sum +i);
        
    }
    printf("%d\n",sum);
    return 0;
}