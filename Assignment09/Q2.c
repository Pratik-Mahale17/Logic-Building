/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  CountOdd
//      Input:          integer
//      Output:         integer
//      Description:    Accept number from user and return count of odd digits
//      Date:           28/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int CountOdd(
                int iNo              // Input number
            )
{
    int iDigit = 0;                 // To store digit
    int iCount = 0;                 // To count odd digits

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Traverse all digits
    while(iNo > 0)
    {
        iDigit = iNo % 10;          // Extract last digit

        // Check odd digit
        if(iDigit % 2 != 0)
        {
            iCount++;
        }

        iNo = iNo / 10;             // Remove last digit
    }

    return iCount;                  // Return result
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to test CountOdd function
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Input number
    int iRet = 0;                   // Result

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    iRet = CountOdd(iValue);

    // Output display
    printf("%d\n", iRet);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      2395
//      Output:     3
//
//      Input:      1018
//      Output:     2
//
//      Input:      -1018
//      Output:     2
//
//      Input:      8462
//      Output:     0
//
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//
//      Time Complexity Analysis
//
//      Let n be the number of digits in the input number
//
//      The while loop runs once for each digit
//      Each iteration performs constant time operations (O(1))
//
//      Therefore,
//      Time Complexity = O(n)
//
//      Space Complexity = O(1)
//
/////////////////////////////////////////////////////////////////////////////////