#include<stdio.h>
int main() {
    float English,Hindi,Maths,Science,BEEE,EMI,a;

    printf("Enter Your English Marks \n",English);
    scanf("%f",&English);
    printf("Enter Your Hindi Marks \n",Hindi);
    scanf("%f",&Hindi);
    printf("Enter Your Maths Marks \n",Maths);
    scanf("%f",&Maths);
    printf("Enter Your Science Marks \n",Science);
    scanf("%f",&Science);
    printf("Enter Your BEEE Marks \n",BEEE);
    scanf("%f",&BEEE);
    printf("Enter Your EMI Marks \n",EMI);
    scanf("%f",&EMI);

    float avg = (English+Hindi+Maths+Science+BEEE+EMI);
    float d = (avg/6);
    printf("The Average of the all Subject %f",d);
    return 0;
}