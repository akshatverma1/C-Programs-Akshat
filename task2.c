//create a program that asks the user to guess a number between 0 and 100 .
//the program shuould then give hints to the user untill they guess the correct number.
#include<stdio.h>
int main() {
    int d;
    printf("Enter the number between 0 to 100\n");
    scanf("%d",&d);
    if (100 > d)
    {
        /* code */
    }
    else{
        printf("Enter Only Those Values between 0 to 100\n"); 
    }

    return 0;
}