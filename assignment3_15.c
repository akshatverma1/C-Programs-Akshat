#include<stdio.h>
#include<math.h>

int main() {
    float e,m,s,c,h,f;

    
    printf("Enter the English Marks \n");
    scanf("%f",&e);
    printf("Enter the Maths Marks \n");
    scanf("%f",&m);
    printf("Enter the Science Marks \n");
    scanf("%f",&s);
    printf("Enter the Computer Marks \n");
    scanf("%f",&c);
    printf("Enter the Hindi Marks \n");
    scanf("%f",&h);
    
    float t = e+m+s+c+h;
    float u = t/500;
    float p = u*100;
    printf("the percentage is %f \n",p);
    printf("Your Result is \n");

    if (p>=60)
    {
        printf("First Division");
    }
    else if ((p>=50)&&(p<=59))
    {
        printf("Second Division");
    }
    else if ((p>=40)&&(p<=49))
    {
        printf("Third Division");
    }
    else {
        printf("Fail");
    }
    return 0;
}