#include<stdio.h>
int main() {
    float a;
    printf("Enter the Value %f \n",a);
    scanf("%f",&a);
    if ((a/2)&&(a/3)&&(a/5)&&(a/7)&&(a/9))
    {
        printf("This number is divisble");
    }

    else {
        printf("This number is not Divisble");
    }
    return 0;
}