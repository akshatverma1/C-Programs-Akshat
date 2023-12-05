#include<stdio.h>
int main() {
    int q,p,a,d,h,r;
    printf("Enter Your Quantity \n");
    scanf("%d",&q);
    printf("Enter Your Prices Per Item \n");
    scanf("%d",&p);
    a = q*p;
    d = 0.1;
    h = a*(0.1);
    r = a - h;
    printf("Your Total Amount :- %d \n",a);
    if (a > 1000)
    {
        printf("Your 10 Percentage discount is applied \n");
        printf("Final Amount :- %d",r);
    }

    else {
        printf("Your Amount is less 1000 so discount has been not applied");
    }
    
    return 0;
}