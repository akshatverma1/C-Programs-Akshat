#include<stdio.h>
int main() {
    system("cls");
    int addhar[5],i;
    int *ptr = addhar;
    for (i = 0; i <5; i++)
    {
        printf("Enter the Value of %d\n",i);
        scanf("%d",(ptr+i));
    }
    printf("Output\n");
    for (i = 0; i <5; i++)
    {
        printf("%d\n",*(ptr+i));
    }
    return 0;
}