///////////////////////////////////////////////////////////////////
//
//      Including Header Files
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h

///////////////////////////////////////////////////////////////////
//
//      Function name:  DigitsSum
//      Input:          Integer Array, Integer
//      Output:         Void
//      Description:    Display summation of digits of each
//                      number from array
//      Date:           03/06/2026
//      Author:         Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

void DigitsSum(
                int Arr[],     // Input array
                int iLength    // Number of elements
              )
{
    int iCnt = 0;              // Loop counter
    int iNo = 0;               // Stores current number
    int iDigit = 0;            // Stores extracted digit
    int iSum = 0;              // Stores sum of digits

    // Traverse the array
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;

        // Handle negative numbers
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        // Calculate sum of digits
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("%d ", iSum);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Entry point function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;             // Stores number of elements
    int iCnt = 0;              // Loop counter

    int *p = NULL;             // Pointer for dynamic memory allocation

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    // Allocate memory dynamically
    p = (int *)malloc(iSize * sizeof(int));

    // Check whether memory allocation is successful
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    // Accept elements from user
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    // Function call
    DigitsSum(p, iSize);

    // Deallocate memory
    free(p);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//      Input :
//      N : 6
//
//      Elements :
//      8225 665 3 76 953 858
//
//      Output :
//      17 17 3 13 17 21
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(n * d)
//
//      Space Complexity : O(1)
//
//      Where n = number of elements
//      d = number of digits in each element
//
///////////////////////////////////////////////////////////////////
