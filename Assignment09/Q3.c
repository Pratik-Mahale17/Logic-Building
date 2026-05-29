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
//                      between 3 and 7 (exclusive range condition as per logic)
//      Date:           28/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int CountRange(
                int iNo              // Input number
             )
{
    int iDigit = 0;                 // To store digit
    int iCount = 0;                 // To count required digits

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Traverse digits
    while(iNo > 0)
    {
        iDigit = iNo % 10;          // Extract digit

        // Check digit in range 3 to 7
        if((iDigit > 3) && (iDigit < 7))
        {
            iCount++;
        }

        iNo = iNo / 10;             // Remove last digit
    }

    return iCount;                  // Return result
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to test CountRange function
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Input number
    int iRet = 0;                  // Result

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    iRet = CountRange(iValue);

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
//      Time Complexity Analysis
//
//      Let n be the number of digits in the input number
//
//      The while loop runs once for each digit
//      Each iteration takes constant time O(1)
//
//      Therefore,
//      Time Complexity = O(n)
//
//      Space Complexity = O(1)
//
/////////////////////////////////////////////////////////////////////////////////