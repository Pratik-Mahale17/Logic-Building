/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  EvenFactorial
//      Input:          integer
//      Output:         integer
//      Description:    Calculates multiplication of all even numbers
//                      up to given number
//      Date:           25/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int EvenFactorial(
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

    // Loop to calculate even factorial
    for(i = 1; i <= iNo; i++)
    {
        // Check whether number is even
        if(i % 2 == 0)
        {
            iFact = iFact * i;
        }
    }

    return iFact;                   // Return result
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to calculate even factorial
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Variable to store input number
    int iRet = 0;                   // Variable to store result

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    iRet = EvenFactorial(iValue);

    // Display result
    printf("Even Factorial of number is %d", iRet);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      6
//      Output:     Even Factorial of number is 48   (2*4*6)
//
/////////////////////////////////////////////////////////////////////////////////