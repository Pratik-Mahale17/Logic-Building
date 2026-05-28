/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  FactDiff
//      Input:          integer
//      Output:         integer
//      Description:    Calculates difference between summation of factors
//                      and summation of non factors
//      Date:           24/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int FactDiff(
                int iNo             // Input number
            )
{
    int i = 0;                      // Counter variable
    int iFactSum = 0;               // Variable to store sum of factors
    int iNonFactSum = 0;            // Variable to store sum of non factors

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to find factors and non factors
    for(i = 1; i < iNo; i++)
    {
        // Check whether i is factor
        if(iNo % i == 0)
        {
            iFactSum = iFactSum + i;        // Add factor
        }
        else
        {
            iNonFactSum = iNonFactSum + i;  // Add non factor
        }
    }

    return (iFactSum - iNonFactSum);        // Return difference
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to calculate difference between factors
//      and non factors
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Variable to store input number
    int iRet = 0;                   // Variable to store return value

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    iRet = FactDiff(iValue);

    // Display result
    printf("%d", iRet);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      12
//      Output:     -34
//
/////////////////////////////////////////////////////////////////////////////////