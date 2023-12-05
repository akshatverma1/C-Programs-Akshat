#include<stdio.h>
int main() {
    int a[6],i;
    /*for (int i = 0; i <=5; i++)
    {
        scanf("%d",&a[i]);
        a[i]++;
    }*/
    i =0;
    while (i<=5)
    {
        scanf("%d",&a[i]);
        a[i]++;
        i++;
    }
    

    printf("%d %d %d %d %d %d",a[0],a[1],a[2],a[3],a[4],a[5]);
    return 0;
}