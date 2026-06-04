///////////////////////////////////////////////////////////////////
//
//      Including Header Files
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
//      Function name:  Product
//      Input:          Integer Array, Integer
//      Output:         Integer
//      Description:    Return product of all odd elements
//                      from the array
//      Date:           03/06/2026
//      Author:         Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

int Product(
                int Arr[],     // Input array
                int iLength    // Number of elements
           )
{
    int iCnt = 0;              // Loop counter
    int iMult = 1;             // Stores multiplication of odd elements
    int bFlag = 0;             // Indicates whether odd element is present

    // Traverse the array
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        // Check whether current element is odd
        if((Arr[iCnt] % 2) != 0)
        {
            iMult = iMult * Arr[iCnt];
            bFlag = 1;
        }
    }

    // If no odd element found
    if(bFlag == 0)
    {
        return 0;
    }

    return iMult;
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
    int iRet = 0;              // Stores return value

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
    iRet = Product(p, iSize);

    // Display result
    printf("Product is %d\n", iRet);

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
//      15 66 3 70 10 88
//
//      Output :
//      45
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Input :
//      N : 6
//
//      Elements :
//      44 66 72 70 10 88
//
//      Output :
//      0
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