//Print all the odd numbers from 5 to 50.
#include<stdio.h>
int main() {
    
    for (int i = 5; i <=50; i++)
    {
        if (i%2 != 0)
        {
            printf("%d\n ",i);
        }
        
    }
    return 0;
}