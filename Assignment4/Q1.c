/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  MultFact
//      Input:          integer
//      Output:         integer
//      Description:    Calculates multiplication of factors of given number
//      Date:           24/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int MultFact(
                int iNo             // Input number
            )
{
    int i = 0;                      // Counter variable
    int iMult = 1;                  // Variable to store multiplication

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to find factors
    for(i = 1; i <= iNo / 2; i++)
    {
        // Check whether i is factor
        if(iNo % i == 0)
        {
            iMult = iMult * i;      // Multiply factors
        }
    }

    return iMult;                   // Return multiplication
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to calculate multiplication of factors
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Variable to store input number
    int iRet = 0;                   // Variable to store return value

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    iRet = MultFact(iValue);

    // Display result
    printf("%d", iRet);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      12
//      Output:     144
//
/////////////////////////////////////////////////////////////////////////////////