//wap to create a array of 10 number and print how many odd numbers 
//are present how many even numbers are presnt in the list (1d and 2d).
//1D Array.
#include<stdio.h>
int a[10],b=0,c=0,i,j;
int enter();
int main() {
    enter();
    //printf("%d %d %d %d %d %d %d %d %d %d",a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10]);
}
int enter() {
    printf("Enter the ten values interger :\n");
    for (i = 1; i <=10; i++)
    {
        scanf("%d",&a[i]);
        if (a[i]%2 != 0)
        {
          //printf("%d",b++);
           b++;
        }  
        if (a[i]%2 == 0)
        {
          //printf("%d",b++);
           c++;
        }      
    }
    printf("%d : odd number are present\n",b);
    printf("%d : Even number are present",c);
    }
        

        

