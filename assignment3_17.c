#include<stdio.h>
int main() {
    int a,m,g;
    printf("Enter Your Age \n");
    scanf("%d",&a);
    printf("Enter Your Married Status for Married(1) and Unmarried(2) \n");
    scanf("%d",&m);
    printf("Enter Your Gender for Male(3) and Female(4) \n");
    scanf("%d",&g);
    if (m == 1)
    {
        printf("Driver it's insured");
    }
    else if ((g == 3)&&(a>30))
    {
        printf("Driver it's insured");
    }
    else if ((g == 4)&&(a>25))
    {
        printf("Driver it's insured");
    }
    else {
        printf("Driver are does not insured");
    }
    return 0;
}