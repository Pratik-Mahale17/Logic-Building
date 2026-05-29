/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  MultDigits
//      Input:          integer
//      Output:         integer
//      Description:    Accept number from user and return multiplication
//                      of all digits
//      Date:           28/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int MultDigits(
                int iNo              // Input number
              )
{
    int iDigit = 0;                 // To store digit
    int iMult = 1;                  // To store multiplication result

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Traverse digits
    while(iNo > 0)
    {
        iDigit = iNo % 10;          // Extract last digit

        // Multiply digit
        iMult = iMult * iDigit;

        iNo = iNo / 10;             // Remove last digit
    }

    return iMult;                   // Return result
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to test MultDigits function
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Input number
    int iRet = 0;                   // Result

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    iRet = MultDigits(iValue);

    // Output display
    printf("%d\n", iRet);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      2395
//      Output:     270
//
//      Input:      1018
//      Output:     8
//
//      Input:      9440
//      Output:     144
//
//      Input:      922432
//      Output:     864
//
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//
//      Time Complexity Analysis
//
//      Let n be the number of digits in the input number
//
//      The while loop runs once for each digit
//      Each iteration performs constant time operations O(1)
//
//      Therefore,
//      Time Complexity = O(n)
//
//      Space Complexity = O(1)
//
/////////////////////////////////////////////////////////////////////////////////