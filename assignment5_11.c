//WAP to add all even numbers from 1 to 10.
#include<stdio.h>
int main() {
    /*
    int n;
    printf("enter number :");
    scanf("%d",&n);
    int sum = 0;
    for (int i = 0; i <=n; i++)
    {
        sum = sum +i;
    }
    printf("sum is %d\n",sum);*/
    
    int i,a;
    int sum = 0;
    for (i = 1; i <=10; i++)
    {
        if (i%2==0)
        {
            sum = sum +i;
        }
    }
    printf("%d\n",sum); 
    return 0;
}