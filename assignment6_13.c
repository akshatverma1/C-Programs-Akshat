//Write a program to create array of 10 numbers and count and print number 
//of positive numbers, number of negative numbers and zeros. (1-D, 2-D)
#include<stdio.h>
int a[10],b=0,c=0,d=0,e=0,f=0,i,j;
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
        if (a[i]==0)
        {
            d++;
        }
        if (a[i]>0)
        {
            e++;
        }
        if (a[i]<0)
        {
            f++;
        }
    }
    printf("%d : Odd number are present\n",b);
    printf("%d : Even number are present\n",c);
    printf("%d : Zero are present\n",d);
    printf("%d : Positive number are present\n",e);
    printf("%d : Negative number are present\n",f);
    }
        

        

