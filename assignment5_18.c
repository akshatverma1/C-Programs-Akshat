//18.	WAP to multiply all even numbers from 1 to n (n value is given by user).
#include<stdio.h>
int main() {
    int i,n;
    int sum = 1;
    printf("enter th value of n\n");
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        
        if (i%2==0)
        {
            sum = sum*i;
        }
    }
    printf("%d\n",sum);

    return 0;
}