/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  CountRange
//      Input:          integer
//      Output:         integer
//      Description:    Accept number from user and return count of digits
//                      between 3 and 7
//      Date:           01/06/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int CountRange(
                    int iNo            // Input number
              )
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if((iDigit > 3) && (iDigit < 7))
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to count digits between 3 and 7
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");

    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("%d", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      2395
//      Output:     1
//
//      Input:      1018
//      Output:     0
//
//      Input:      4521
//      Output:     2
//
//      Input:      9922
//      Output:     0
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