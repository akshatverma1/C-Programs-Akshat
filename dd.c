#include<stdio.h>
int main(){
    int a,i,s,k;
    printf("Enter the how many number you want to sum \n");
    scanf("%d",&a);
    int b[a];
    for (i = 1; i <=a; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int j=1;j<=a;j++){
    	
    	for(k=2;k<=a;k++){
    		//s=b[j]+b[k];
		}
        s=b[j]+b[k];
	}
	printf("%d",s);
    
    return 0;
    }