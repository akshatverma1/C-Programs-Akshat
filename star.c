#include<stdio.h>
int main() {
    int i;
    char j;
    for (i = 1; i <=10; i++)
    {
        for ( j = 'a'; j <='z'; j++)
        {
            printf("%C",j);
        }
        
        printf("%d",i );
    }
    
    return 0;
}