///////////////////////////////////////////////////////////////////
//
//      Including Header Files
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//      Function name:  Digits
//      Input:          Integer Array, Integer
//      Output:         Void
//      Description:    Display all numbers which contain
//                      exactly 3 digits
//      Date:           03/06/2026
//      Author:         Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

void Digits(
                int Arr[],     // Input array
                int iLength    // Number of elements
           )
{
    int iCnt = 0;              // Loop counter
    int iNo = 0;               // Temporary variable

    // Traverse the array
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];

        // Handle negative numbers
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        // Check whether number has exactly 3 digits
        if((iNo >= 100) && (iNo <= 999))
        {
            printf("%d ", Arr[iCnt]);
        }
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
    Digits(p, iSize);

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
//      665 953 858
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(n)
//
//      Space Complexity : O(1)
//
//      Where n is the number of elements in array
//
///////////////////////////////////////////////////////////////////