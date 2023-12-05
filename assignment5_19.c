//19.WAP to print numbers from n to m (where n and m given by user)
#include<stdio.h>
int main() {
    int n,m,i;
    printf("Enter the value of the m & n\n");
    scanf("%d %d",&n,&m);
    for (i = n; i <=m; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}