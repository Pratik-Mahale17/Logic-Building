/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  FactorialDiff
//      Input:          integer
//      Output:         integer
//      Description:    Calculates difference between even factorial
//                      and odd factorial of given number
//      Date:           25/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int FactorialDiff(
                    int iNo         // Input number
                 )
{
    int i = 0;                      // Counter variable
    int iEvenFact = 1;              // Variable to store even factorial
    int iOddFact = 1;               // Variable to store odd factorial

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to calculate even and odd factorial
    for(i = 1; i <= iNo; i++)
    {
        // Check whether number is even
        if(i % 2 == 0)
        {
            iEvenFact = iEvenFact * i;
        }
        else
        {
            iOddFact = iOddFact * i;
        }
    }

    return (iEvenFact - iOddFact);  // Return difference
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to calculate difference of factorials
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Variable to store input number
    int iRet = 0;                   // Variable to store result

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    iRet = FactorialDiff(iValue);

    // Display result
    printf("Factorial difference is %d", iRet);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      5
//      Output:     Factorial difference is -78
//
/////////////////////////////////////////////////////////////////////////////////