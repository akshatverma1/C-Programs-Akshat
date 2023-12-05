//write a function that prints namaste if user is indian &banjor if the user is french.
#include<stdio.h>
void f(),b();
int main() {
    char a;
    printf("enter the i & f \n");
    scanf("%c",&a);
    if (a==('i'))
    {
        f();    
    }
    else if (a==('f'))
    {
        b();
    }
    return 0;
}
void f() {
    printf("Namaste");
}
void b() {
    printf("Banjor");
}