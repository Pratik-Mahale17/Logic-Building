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
//      Date:           01/06/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int MultDigits(
                    int iNo            // Input number
              )
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }

        iNo = iNo / 10;
    }

    return iMult;
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to calculate multiplication of digits
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");

    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d", iRet);

    return 0;
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
//      Time Complexity: O(n)
//      Space Complexity: O(1)
//
//      where n = number of digits in the input number
//
/////////////////////////////////////////////////////////////////////////////////