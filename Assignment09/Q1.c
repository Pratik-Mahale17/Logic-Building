/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  CountEven
//      Input:          integer
//      Output:         integer
//      Description:    Accepts number from user and returns count of even digits
//      Date:           28/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int CountEven(
                int iNo              // Input number
             )
{
    int iDigit = 0;                 // To store digit
    int iCount = 0;                 // To count even digits

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Traverse all digits
    while(iNo > 0)
    {
        iDigit = iNo % 10;          // Extract digit

        // Check even digit
        if(iDigit % 2 == 0)
        {
            iCount++;
        }

        iNo = iNo / 10;             // Remove last digit
    }

    return iCount;                  // Return count
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to test CountEven function
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Input number
    int iRet = 0;                   // Result

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    iRet = CountEven(iValue);

    // Output display
    printf("%d\n", iRet);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      2395
//      Output:     1
//
//      Input:      1018
//      Output:     2
//
//      Input:      -1018
//      Output:     2
//
//      Input:      8462
//      Output:     4
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