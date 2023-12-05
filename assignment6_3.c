//write a program to accept the amount of the sale 
//made for each day in a week and calculate the AVERAGE of these value(using 1D)
#include<stdio.h>
int main() {
    int a[7];
    printf("Enter the sale of Monday\n");
    scanf("%d",&a[0]);
    printf("Enter the sale of Tuesday\n");
    scanf("%d",&a[1]);
    printf("Enter the sale of Wednesday\n");
    scanf("%d",&a[2]);
    printf("Enter the sale of Thusday\n");
    scanf("%d",&a[3]);
    printf("Enter the sale of Friday\n");
    scanf("%d",&a[4]);
    printf("Enter the sale of Saturday\n");
    scanf("%d",&a[5]);
    printf("Enter the sale of Sunday\n");
    scanf("%d",&a[6]);
    printf("The Average Sale of the week %d",(a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6])/7);
    return 0;
}