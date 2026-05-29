/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  DollarToINR
//      Input:          integer
//      Output:         integer
//      Description:    Converts US Dollars into Indian Rupees
//      Date:           25/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int DollarToINR(
                    int iNo         // Input value in USD
               )
{
    int iAns = 0;                   // Variable to store converted value

    // Conversion logic (1 USD = 70 INR)
    iAns = iNo * 70;

    return iAns;                    // Return converted value
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to convert USD to INR
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Variable to store USD
    int iRet = 0;                  // Variable to store INR result

    printf("Enter number of USD\n");

    scanf("%d", &iValue);

    // Function call
    iRet = DollarToINR(iValue);

    // Display result
    printf("Value in INR is %d", iRet);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      5
//      Output:     Value in INR is 350
//
/////////////////////////////////////////////////////////////////////////////////