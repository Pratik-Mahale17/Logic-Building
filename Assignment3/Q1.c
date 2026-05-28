/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  PrintEven
//      Input:          integer
//      Output:         void
//      Description:    Prints given number of even numbers on screen
//      Date:           24/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
void PrintEven(
                    int iNo         // Number of even numbers to print
              )
{
    int iCnt = 0;                   // Counter variable

    // Check whether input is valid or not
    if(iNo <= 0)
    {
        return;                     // Terminate function for invalid input
    }

    // Loop to print even numbers
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt * 2);
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to print even numbers on screen
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Variable to store input number

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    PrintEven(iValue);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      7
//      Output:     2 4 6 8 10 12 14
//
/////////////////////////////////////////////////////////////////////////////////