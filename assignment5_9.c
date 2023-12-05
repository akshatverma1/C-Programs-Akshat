//WAP to add all odd numbers from 1 to 10.
#include<stdio.h>
int main() {
    int i;
    int sum=0;
    for (i = 1; i <=10; i++)
    {
        sum = (sum +i);
        if (sum %2 != 0)
        {
            printf("%d\n",sum);
        }
        
        
    }
    return 0;
}