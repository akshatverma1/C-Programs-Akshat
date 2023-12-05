#include<stdio.h>
#include<math.h>

int main() {
    int a = 44;
    //case1
    a++;
    printf("First Case :- %d \n",a);

    //case2
    int b = 44;
    b++;
    printf("Case Second :- %d \n",b);

    //case3
    int c = 44,d;
    d = ++c;
    printf("Case Third :- %d \n",d);
    printf("Case Third 2 :- %d \n ",c);

    //case4
    int e = 6,f;
    f = e++;
    printf("Case Fourth :- %d \n",e);
    printf("Case Fourthh :- %d \n",f);

    
    //case5
    int g = 8,j;
    j = g++ + ++g;
    printf("Case Fith :- %d \n",g);
    printf("Case Fithh :- %d \n",j);

    //case6
    int s = 3;
    s = s++ + ++s;
    printf("Case Sixth :- %d \n",s);
//done
    //case7
    int m = 2;
    printf("Case Seven :- %d %d %d %d",m,++m,m++,m++ + ++m);
    return 0;
}