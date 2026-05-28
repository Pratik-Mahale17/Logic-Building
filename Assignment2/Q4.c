/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  Display
//      Input:          integer, integer
//      Output:         void
//      Description:    Displays first number according to given frequency
//      Date:           23/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
void Display(
                int iNo,                // Number to display
                int iFrequency          // Number of times to display
            )
{
    int iCnt = 0;                       // Counter variable

    // Loop to print number according to frequency
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d ", iNo);
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to display number multiple times
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                     // Variable to store number
    int iCount = 0;                     // Variable to store frequency

    printf("Enter number\n");
    scanf("%d", &iValue);

    printf("Enter frequency\n");
    scanf("%d", &iCount);

    // Function call
    Display(iValue, iCount);

    return 0;                           // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      12  5
//      Output:     12 12 12 12 12
//
/////////////////////////////////////////////////////////////////////////////////