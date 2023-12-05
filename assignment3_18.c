#include<stdio.h>
int main() {
    float s1,s2,s3,t;
    printf("Enter the Length of First Side \n");
    scanf("%f",&s1);
    printf("Enter the length of Second Side \n");
    scanf("%f",&s2);
    printf("Enter the length of Third Side \n");
    scanf("%f",&s3);
    t = (s1+s2+s3);
    
    if (t == 180)
    {
        printf("it's is a Quadrilateral traingle");
    }
    else {
        printf("it is a not a Quadrilateral traingle");
    }
    
    return 0;
}