/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  OddFactorial
//      Input:          integer
//      Output:         integer
//      Description:    Calculates multiplication of all odd numbers
//                      up to given number
//      Date:           25/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int OddFactorial(
                    int iNo         // Input number
                )
{
    int i = 0;                      // Counter variable
    int iFact = 1;                  // Variable to store result

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to calculate odd factorial
    for(i = 1; i <= iNo; i++)
    {
        // Check whether number is odd
        if(i % 2 != 0)
        {
            iFact = iFact * i;
        }
    }

    return iFact;                   // Return result
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to calculate odd factorial
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Variable to store input number
    int iRet = 0;                   // Variable to store result

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    iRet = OddFactorial(iValue);

    // Display result
    printf("Odd Factorial of number is %d", iRet);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      5
//      Output:     Odd Factorial of number is 15   (1*3*5)
//
/////////////////////////////////////////////////////////////////////////////////