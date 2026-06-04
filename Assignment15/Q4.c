///////////////////////////////////////////////////////////////////
//
//      Including Header Files
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//      Function name:  Range
//      Input:          Integer Array, Integer, Integer, Integer
//      Output:         Void
//      Description:    Display all elements which are in the
//                      specified range
//      Date:           03/06/2026
//      Author:         Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

void Range(
            int Arr[],         // Input array
            int iLength,       // Number of elements
            int iStart,        // Starting point of range
            int iEnd           // Ending point of range
          )
{
    int iCnt = 0;              // Loop counter

    // Traverse the array
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        // Check whether element lies within range
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
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
    int iValue1 = 0;           // Starting point of range
    int iValue2 = 0;           // Ending point of range

    int *p = NULL;             // Pointer for dynamic memory allocation

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the starting point\n");
    scanf("%d",&iValue1);

    printf("Enter the ending point\n");
    scanf("%d",&iValue2);

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
    Range(p, iSize, iValue1, iValue2);

    // Deallocate memory
    free(p);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//      Input :
//      N : 6
//
//      Start : 60
//      End   : 90
//
//      Elements :
//      85 66 3 76 93 88
//
//      Output :
//      66 76 88
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Input :
//      N : 6
//
//      Start : 30
//      End   : 50
//
//      Elements :
//      85 66 3 76 93 88
//
//      Output :
//      No element found
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