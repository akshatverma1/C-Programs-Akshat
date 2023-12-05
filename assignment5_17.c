//WAP to multiply all even numbers from 1 to 10.
#include<stdio.h>
int main() {
    int i;
    int sum = 1;
    for (i = 1; i <=10; i++)
    {
        
        if (i%2==0)
        {
            sum = sum*i;
        }
    }
    printf("%d\n",sum);
    return 0;
}