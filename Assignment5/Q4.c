/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  OddDisplay
//      Input:          integer
//      Output:         void
//      Description:    Prints odd numbers less than 15
//                      up to given number
//      Date:           24/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
void OddDisplay(
                    int iNo         // Input number
               )
{
    int i = 0;                      // Counter variable

    // Loop to check numbers
    for(i = 1; i < iNo; i++)
    {
        // Check whether number is odd and less than 15
        if((i % 2 != 0) && (i < 15))
        {
            printf("%d ", i);
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to print odd numbers less than 15
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Variable to store input number

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    OddDisplay(iValue);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      20
//      Output:     1 3 5 7 9 11 13
//
/////////////////////////////////////////////////////////////////////////////////