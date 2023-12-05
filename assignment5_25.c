#include<stdio.h>
int main() {
    system("cls");
    int d,p,i;
    printf("Enter the Any Number\n");
    scanf("%d",&d);
    printf("Enter the Power Of the Number\n");
    scanf("%d",&p);
    for (i = d; i <=p; i++)
    {
       // printf("%d",i);
       
        d=i;
        printf("%d\n",d);   
    }
}