//Enter address (house number,block,city,state)of five people...?
#include<stdio.h>
#include<string.h>
int print();
typedef struct address
{
    int House;
    char Block[2];
    char city[100];
    char state[100];
}add;
void main() 
{
    add e[6];
    e[0].House = 100;
    strcpy(e[0].Block,"a");
    strcpy(e[0].city,"Indore");
    strcpy(e[0].state,"Madhya Pradesh");

    e[1].House = 100;
    strcpy(e[1].Block,"b");
    strcpy(e[1].city,"Bhopal");
    strcpy(e[1].state,"Gujarat");

    e[2].House = 100;
    strcpy(e[2].Block,"c");
    strcpy(e[2].city,"Indor");
    strcpy(e[2].state,"Madha Pradesh");

    e[3].House = 100;
    strcpy(e[3].Block,"t");
    strcpy(e[3].city,"Indore");
    strcpy(e[3].state,"Madhya Pradesh");

    e[4].House = 100;
    strcpy(e[4].Block,"e");
    strcpy(e[4].city,"Indoree");
    strcpy(e[4].state,"Madhyaa Pradesh");

    printf("%d\n",e[0].House);
    printf("%s\n",e[0].Block);
    printf("%s\n",e[0].city);
    printf("%s\n",e[0].state);
    printf("%d\n",e[1].House);
    printf("%s\n",e[1].Block);
    printf("%s\n",e[1].city);
    printf("%s\n",e[1].state);
    printf("%d\n",e[2].House);
    printf("%s\n",e[2].Block);
    printf("%s\n",e[2].city);
    printf("%s\n",e[2].state);
    printf("%d\n",e[3].House);
    printf("%s\n",e[3].Block);
    printf("%s\n",e[3].city);
    printf("%s\n",e[3].state);
    printf("%d\n",e[4].House);
    printf("%s\n",e[4].Block);
    printf("%s\n",e[4].city);
    printf("%s",e[4].state);


}




