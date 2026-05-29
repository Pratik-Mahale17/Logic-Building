/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  Factorial
//      Input:          integer
//      Output:         integer
//      Description:    Calculates factorial of given number
//      Date:           25/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int Factorial(
                int iNo             // Input number
             )
{
    int i = 0;                      // Counter variable
    int iFact = 1;                  // Variable to store factorial

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to calculate factorial
    for(i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }

    return iFact;                   // Return factorial
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to calculate factorial of number
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Variable to store input number
    int iRet = 0;                   // Variable to store result

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    iRet = Factorial(iValue);

    // Display result
    printf("Factorial of number is %d", iRet);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      5
//      Output:     Factorial of number is 120
//
/////////////////////////////////////////////////////////////////////////////////