/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  Difference
//      Input:          Integer Array, Integer
//      Output:         Integer
//      Description:    Returns difference between summation of even
//                      elements and summation of odd elements
//      Date:           02/06/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }

    return (iEvenSum - iOddSum);
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to calculate difference between
//      summation of even and odd elements
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is %d\n",iRet);

    free(p);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:
//      N : 6
//      Elements : 85 66 3 80 93 88
//
//      Output:
//      53      (234 - 181)
//
/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
//
//      Time Complexity: O(n)
//      Space Complexity: O(1)
//
//      where n = number of elements in array
//
/////////////////////////////////////////////////////////////////////////////////