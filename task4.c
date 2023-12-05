//Develop a program that convert temperature from fahrenheit to celsius or vice versa.
#include<stdio.h>
float f,g;
int fahrenheit();
void celsius();
int main() {
    int t;
    printf("Choice Any One You Want to Convert\n");
    printf("Press 1 For Fahrenheit to Celsius\n");
    printf("Press 2 For Celsius to Fahrenheit\n");
    scanf("%d",&t);
    switch (t)
    {
    case 1 : printf("Enter The Value of the current Celsius\n");
             scanf("%f",&f);
             fahrenheit();
        break;
    case 2 : printf("Enter The Value of the current Fahrenheit\n");
             scanf("%f",&g);
             celsius(4);
        break;    

    default: printf("You Enter Only Two Values that 1 or 2");
        break;
    }
}
int fahrenheit() {
    float c = ((f - 32)*(0.555555556));
    printf("%f",c);
}
void celsius() {
    float e = ((g *(1.8)) + 32);
    printf("%f",e); 
    
}