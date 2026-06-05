///////////////////////////////////////////////////////////////////
//
//      Including Header Files
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//      Function name:  Difference
//      Input:          Integer Array, Integer
//      Output:         Integer
//      Description:    Return difference between largest
//                      and smallest number from array
//      Date:           03/06/2026
//      Author:         Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

int Difference(
                int Arr[],     // Input array
                int iLength    // Number of elements
              )
{
    int iCnt = 0;              // Loop counter
    int iMax = Arr[0];         // Stores maximum element
    int iMin = Arr[0];         // Stores minimum element

    // Traverse the array
    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        // Update maximum element
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }

        // Update minimum element
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return (iMax - iMin);
}

///////////////////////////////////////////////////////////////////
//
//      Entry point function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;             // Stores number of elements
    int iRet = 0;              // Stores return value
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
    iRet = Difference(p, iSize);

    // Display result
    printf("Difference is %d\n",iRet);

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
//      85 66 3 66 93 88
//
//      Output :
//      90 (93 - 3)
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