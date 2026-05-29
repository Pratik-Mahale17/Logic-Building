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
//      Description:    Accept number from user and return difference between
//                      summation of even digits and summation of odd digits
//      Date:           28/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int CountDiff(
                int iNo              // Input number
             )
{
    int iDigit = 0;                 // To store digit
    int iSumEven = 0;               // Sum of even digits
    int iSumOdd = 0;                // Sum of odd digits

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Traverse digits
    while(iNo > 0)
    {
        iDigit = iNo % 10;          // Extract last digit

        // Check even or odd digit
        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }

        iNo = iNo / 10;             // Remove last digit
    }

    // Return difference (even - odd)
    return (iSumEven - iSumOdd);
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to test CountDiff function
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Input number
    int iRet = 0;                   // Result

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    iRet = CountDiff(iValue);

    // Output display
    printf("%d\n", iRet);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      2395
//      Output:     -15
//
//      Input:      1018
//      Output:     6
//
//      Input:      8440
//      Output:     16
//
//      Input:      5733
//      Output:     -18
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