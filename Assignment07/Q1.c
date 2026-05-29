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
//      Description:    Prints '*' and '#' pattern based on given number
//      Date:           25/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
void Display(
                int iNo             // Input number
            )
{
    int i = 0;                  // Counter variable

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Print '*' iNo times
    for(i = 1; i <= iNo; i++)
    {
        printf("* ");
    }

    // Print '#' iNo times
    for(i = 1; i <= iNo; i++)
    {
        printf("# ");
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to display * and # pattern
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;             // Variable to store input number

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    Display(iValue);

    return 0;                   // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      5
//      Output:     * * * * * # # # # #
//
/////////////////////////////////////////////////////////////////////////////////