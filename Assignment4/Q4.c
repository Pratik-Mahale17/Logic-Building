/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  SumNonFact
//      Input:          integer
//      Output:         integer
//      Description:    Calculates sum of non factors of given number
//      Date:           24/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int SumNonFact(
                    int iNo         // Input number
              )
{
    int i = 0;                      // Counter variable
    int iSum = 0;                   // Variable to store summation

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to find non factors
    for(i = 1; i < iNo; i++)
    {
        // Check whether i is non factor
        if(iNo % i != 0)
        {
            iSum = iSum + i;        // Add non factors
        }
    }

    return iSum;                    // Return summation
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to calculate sum of non factors
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Variable to store input number
    int iRet = 0;                   // Variable to store return value

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    iRet = SumNonFact(iValue);

    // Display result
    printf("%d", iRet);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      12
//      Output:     50
//
/////////////////////////////////////////////////////////////////////////////////