/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  Divide
//      Input:          integer, integer
//      Output:         integer
//      Description:    Performs division of 2 integers
//      Date:           23/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int Divide(
              int iNo1,             // First input
              int iNo2              // Second input
          )
{
    int iAns = 0;                   // Variable to store result

    // Check whether denominator is zero or not
    if(iNo2 == 0)
    {
        return -1;                  // Return -1 if division is not possible
    }

    iAns = iNo1 / iNo2;             // Perform division

    return iAns;                    // Return the result
}


int main()
{
    int iValue1 = 15;               // Variable to store first number
    int iValue2 = 5;                // Variable to store second number
    int iRet = 0;                   // Variable to store returned result

    // Call Divide function
    iRet = Divide(iValue1, iValue2);

    // Display the result
    printf("Division is %d", iRet);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      15    5
//      Output:     3
//
/////////////////////////////////////////////////////////////////////////////////