#include<stdio.h>
int main() {
    int t,u;

    printf("Enter the value of a \n",t);
    scanf("%d",&t);
    printf("Enter the value of b \n",u);
    scanf("%d",&u);

    if (t == u)
    {
        printf("This is a equal value");
    }

    else {
        printf("This is a not equal to \n");
    }
    return 0;
}