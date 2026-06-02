/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  Display
//      Input:          Integer Array, Integer
//      Output:         Void
//      Description:    Displays all elements which are divisible by 5
//      Date:           02/06/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0)
        {
            printf("%d ", Arr[iCnt]);
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to display elements divisible by 5
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    Display(p, iSize);

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
//      85 80
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