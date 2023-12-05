#include<stdio.h>
int main() {
    int s,g,d,r,u,h;
    printf("Enter Your Basic Salary \n");
    scanf("%d",&s);
    g = (s + 500);
    r = s*(0.98);
    u = s*(0.1);
    h = s*(0.9);

    if (s>=1500)
    {
        printf("HRA is 500rs and DA is 98 Percentage :- %d",r);
        printf("rs");
    }
    else {
        printf("Your HRA is 10 Percentage and DA is 90 Percentage \n");
        printf("HRA = %d",u);
        printf("rs \n");
        printf("DA = %d",h);
        printf("rs");
    }
    return 0;
}