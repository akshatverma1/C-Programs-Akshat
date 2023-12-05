#include<stdio.h>
#include<stdlib.h>
int main () {
    char hotelmenu;
    system("cls");
    printf("Choice Any\n B-breakfast\n L-Lunch\n S-Snacks\n D-Dinner\n E-Exits\n");
    scanf(" %c",&hotelmenu);
    do
    {
        /* code */
    
    
    switch (hotelmenu)
    {
    case 'b' :    
    case 'B' : printf("You Choice Breakfast\n");
    printf("Choice any dishes \n");
    printf("P - Poha\n");
    printf("S - Somasa\n");
    printf("D - Dosa\n");
    printf("U - Rava upma\n");
    printf("E - Exits\n");
    char breakfast;
    scanf(" %C",&breakfast);
    switch (breakfast)
    {
    case 'p' :     
    case 'P' : printf("You Order Poha\n");
    break;
    case 's' :
    case 'S' : printf("You Order samosa\n"); 
    break;
    case 'd' :
    case 'D' : printf("You Order Dosa\n"); 
    break;
    case 'u' :
    case 'U' : printf("You Order Rava upma\n ");
    break;
    case 'e' :   
    case 'E' : break;//exit(0);
    break;
    default:printf("Only Order Dish are Given in this Menu\n");
    break;
        
    }
        break;
    case 'l' :    
    case 'L' : printf("Lunch\n");
        printf("You Choice Lunch\n");
        printf("Choice any dishes \n");
        printf("M - Masala Bhindi\n");
        printf("G - Gujarati Kadhi\n");
        printf("P - Pulaos\n");
        printf("F - Fried Rice\n");
        printf("E - Exits\n");
        char lunch;
        scanf(" %C",&lunch);
        switch (lunch)
        {
        case 'm' :   
        case 'M' : printf("You Order Masala Bhindi\n");
        break;
        case 'g' :
        case 'G' : printf("You Order Gujarati Kadhi\n");
        break;
        case 'p' :
        case 'P' : printf("You Order Pulaos\n");
        break;
        case 'f' :
        case 'F' : printf("You Order Fried Rice\n");
        break;  
        case 'e' :
        case 'E' : break;
        break; 
        default:printf("Only Order Dish are Given in this Menu\n");
        break;
        }
        break;
    case 's' :    
    case 'S' : printf("Snacks\n");
    printf("You Choice Snacks\n");
        printf("Choice any dishes \n");
        printf("B - Biscuits\n");
        printf("N - Noddles\n");
        printf("T - Toffi\n");
        printf("P - Pizza\n");
        printf("E - Exits\n");
        char snacks;
        scanf(" %C",&snacks);
        switch (snacks)
        {
        case 'b' :   
        case 'B' : printf("You Order Biscuits\n");
            break;
        case 'n' :   
        case 'N' : printf("You Order Noddles\n");
            break;
        case 't' :    
        case 'T' : printf("You Order Toffi\n");
            break;
        case 'p' :   
        case 'P' : printf("You Order Pizza\n");
            break;
        case 'e' :         
        case 'E' : break;//exit(0);
        break;         
        default:printf("Only Order Dish are Given in this Menu\n");
            break;
        }
        break;
    case 'd' :    
    case 'D' : printf("Dinner\n");
    printf("You Choice Dinner\n");
        printf("Choice any dishes \n");
        printf("C - Chapatti Veg Kurma\n");
        printf("N - Brown Rice Dosa\n");
        printf("T - Palak Pinner\n");
        printf("D - Dal Makhani\n");
        printf("E - Exits\n");
        char Dinner;
        scanf(" %C",&Dinner);
        switch (Dinner)
        {
        case 'c' :    
        case 'C' : printf("You Order Chapatti Veg Kurma\n");
            break;
        case 'n' :   
        case 'N' : printf("You Order Brown Rice Dosa\n");
            break;
        case 't' :       
        case 'T' : printf("You Order Palak Pinner\n");
            break;
        case 'd' :   
        case 'D' : printf("You Order Dal Makhani\n");       
            break;
        case 'e' :       
        case 'E' : break;//exit(0);
        break;
        default:printf("Only Order Dish are Given in this Menu\n");
            break;
        }
        break;
    case 'e' :     
    case 'E' : break; // exit(0);   
    default: printf("Enter Valid Category \n");
        break;
    }
    } while (/* condition */);
    printf("Thanks For Visiting");
    return 88; 
}