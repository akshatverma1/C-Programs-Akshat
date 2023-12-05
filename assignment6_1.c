//Write a program to accept roll nos. of 10 students and display them using (1-D) array.
#include<stdio.h>
int main() {
    int a[10],i;
    //scanf("%d %d %d %d %d %d %d %d %d %d\n",&i[0],&i[1],&i[2],&i[3],&i[4],&i[5],&i[6],&i[7],&i[8],&i[9]);
    //printf("%d %d %d %d %d %d %d %d %d %d",i[0],i[1],i[2],i[3],i[4],i[5],i[6],i[7],i[8],i[9]);
    for (i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
        
    }
    printf("%d %d %d %d %d %d %d %d %d %d",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);
    
    return 0;
    
}