///////////////////////////////////////////////////////////////////
//
//      Including Header Files
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//      User defined macros
//
///////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////
//
//      Function name:  Check
//      Input:          Integer Array, Integer, Integer
//      Output:         BOOL
//      Description:    Check whether given number is present
//                      in array or not
//      Date:           03/06/2026
//      Author:         Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

BOOL Check(
            int Arr[],         // Input array
            int iLength,       // Number of elements
            int iNo            // Number to search
          )
{
    int iCnt = 0;              // Loop counter

    // Traverse the array
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        // Check whether current element is equal to iNo
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }

    return FALSE;
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
    int iValue = 0;            // Number to search

    int *p = NULL;             // Pointer for dynamic memory allocation

    BOOL bRet = FALSE;         // Stores return value

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    printf("Enter the number\n");
    scanf("%d",&iValue);

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
    bRet = Check(p, iSize, iValue);

    // Display result
    if(bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    // Deallocate memory
    free(p);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//      Input :
//      N : 6
//      NO : 66
//
//      Elements :
//      85 66 3 66 93 88
//
//      Output :
//      TRUE
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Input :
//      N : 6
//      NO : 12
//
//      Elements :
//      85 11 3 15 11 111
//
//      Output :
//      FALSE
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