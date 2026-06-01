/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  CountDiff
//      Input:          integer
//      Output:         integer
//      Description:    Accept number from user and return difference
//                      between summation of even digits and odd digits
//      Date:           01/06/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int CountDiff(
                int iNo            // Input number
             )
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;
    }

    return (iEvenSum - iOddSum);
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to calculate difference between
//      summation of even digits and odd digits
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");

    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      2395
//      Output:     -15      (2 - 17)
//
//      Input:      1018
//      Output:     6        (8 - 2)
//
//      Input:      8440
//      Output:     16       (16 - 0)
//
//      Input:      5733
//      Output:     -18      (0 - 18)
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