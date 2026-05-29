/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  Display
//      Input:          integer
//      Output:         void
//      Description:    Displays number name according to input
//      Date:           25/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
void Display(
                int iNo             // Input number
            )
{
    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Check number and display corresponding word
    if(iNo == 0)
    {
        printf("Zero");
    }
    else if(iNo == 1)
    {
        printf("One");
    }
    else if(iNo == 2)
    {
        printf("Two");
    }
    else if(iNo == 3)
    {
        printf("Three");
    }
    else if(iNo == 4)
    {
        printf("Four");
    }
    else if(iNo == 5)
    {
        printf("Five");
    }
    else if(iNo == 6)
    {
        printf("Six");
    }
    else if(iNo == 7)
    {
        printf("Seven");
    }
    else if(iNo == 8)
    {
        printf("Eight");
    }
    else if(iNo == 9)
    {
        printf("Nine");
    }
    else
    {
        printf("Invalid Number");
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to display number name
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Variable to store input number

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    Display(iValue);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      5
//      Output:     Five
//
/////////////////////////////////////////////////////////////////////////////////