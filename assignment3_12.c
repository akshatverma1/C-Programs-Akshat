#include<stdio.h>
int main() {
    int w,r,t;
    printf("Enter Present Year \n");
    scanf("%d",&w);
    printf("Enter Your Joining Year \n");
    scanf("%d",&r);
    t = w - r;

    if (t>3)
    {
        printf("Congrutation You have credit a bonus of 2500rs");
    }
    else {

    }
    return 0;
}