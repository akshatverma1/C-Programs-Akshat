#include<stdio.h>
int main() {
    int day;

    printf("Enter Day \n");
    scanf("%d",&day);
    
    switch (day) {

        case 1 : printf("sunday");
        int date;
        printf("Enter date \n");
        scanf("%d",&date);
        switch (date)
        {
        case 1 : printf("09/88.577");
            break;
        case 2 : printf("09/33/2003");
        break;
        default: printf("enter valid date");
            break;
        }
        break;
        case 2 : printf("Tuesday \n");
        break;
        case 3 : printf("Wednesday \n");
        break;
        case 4 : printf("Thusday \n");
        break;
        case 5 : printf("Friday \n");
        break;
        case 6 : printf("Saturday \n");
        break;
        case 7 : printf("Sunday \n");
        break;

        default : printf("Its not Valid Number");
    }
     return 0;
}