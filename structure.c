#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
void main() {

struct student s1;
strcpy(s1.name,"akshat verma");
//s1.name = "akshat"; 
s1.roll = 19997;
s1.cgpa = 9.33;

printf("%s\n",s1.name);
printf("%d\n",s1.roll);
printf("%f",s1.cgpa);
}
