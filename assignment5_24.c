#include<stdio.h>
int main() {
    int m,j=1;
    printf("Enter the one digits\n");
    scanf("%d",&m);
    for (int i = m; i >=1; i--)
    {
        j = j*i;
    }
    printf("%d\n",j);
    return 0;
}