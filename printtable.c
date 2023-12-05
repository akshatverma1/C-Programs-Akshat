#include<stdio.h>
int main() {
    int j,m;
    m=2;
    printf("Enter the any number to print the table of that perticular \n");
    scanf("%d",&j);
    for ( int i = 1; i <= 10; i++)
    {
        int u = i*j;
        printf("2 x %d %d \n",i,u);
        
    }
    
    return 0;
}