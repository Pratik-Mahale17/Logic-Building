///////////////////////////////////////////////////////////////////
//
//      Including Header Files
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//      Function name:  FirstOcc
//      Input:          Integer Array, Integer, Integer
//      Output:         Integer
//      Description:    Return index of first occurrence of
//                      given number from array
//      Date:           03/06/2026
//      Author:         Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

int FirstOcc(
                int Arr[],     // Input array
                int iLength,   // Number of elements
                int iNo        // Number to search
            )
{
    int iCnt = 0;              // Loop counter

    // Traverse the array
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        // Check whether current element is equal to iNo
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }

    return -1;
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
    int iRet = 0;              // Stores return value

    int *p = NULL;             // Pointer for dynamic memory allocation

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
    iRet = FirstOcc(p, iSize, iValue);

    // Display result
    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurrence of number is %d\n",iRet);
    }

    // Deallocate memory
    free(p);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//      Input :
//      N : 6
//
//      NO : 66
//
//      Elements :
//      85 66 3 66 93 88
//
//      Output :
//      1
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Input :
//      N : 6
//
//      NO : 12
//
//      Elements :
//      85 11 3 15 11 111
//
//      Output :
//      -1
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