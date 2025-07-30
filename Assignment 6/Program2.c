/*
Accept a single digit number from the user and print its word form (e.g input 9 → output Nine). 
If the input has more than one digit, print "Invalid input".
*/

#include<stdio.h>


void DisplayNo(int iNo)
{
    switch (iNo)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break; 
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
        break;
        
    case 5:
        printf("Five\n");
        break;
 
    case 6:
        printf("Six\n");
        break; 
        
    case 7:
        printf("Seven\n");
        break; 
        
    case 8:
        printf("Eight\n");
        break;
        
    case 9:
        printf("Nine\n");
        break;        
    
    default:
        printf("Invlalid input");
        break;
    }
}
 int main()
 {
    int iChoice = 0;

    printf("Enter the number between 1 to 9 \n");

    scanf("%d",&iChoice);


    DisplayNo(iChoice);

    return 0;
 }