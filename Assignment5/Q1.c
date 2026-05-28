/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  Pattern
//      Input:          integer
//      Output:         void
//      Description:    Displays "$ *" pattern on screen
//      Date:           24/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
void Pattern(
                int iNo             // Number of times to print pattern
            )
{
    int i = 0;                      // Counter variable

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to print pattern
    for(i = 1; i <= iNo; i++)
    {
        printf("$ * ");
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to display pattern on screen
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Variable to store input number

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    Pattern(iValue);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      5
//      Output:     $ * $ * $ * $ * $ *
//
/////////////////////////////////////////////////////////////////////////////////