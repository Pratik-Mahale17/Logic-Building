///////////////////////////////////////////////////////////////////
//
//      File Name : Q5.c
//      Project   : Logic Building Pattern Assignment
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Including Header File
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Input         : Integer, Integer
//      Output        : Void
//      Description   : Display consecutive numbers
//                      in matrix format according
//                      to given rows and columns
//      Date          : 08/06/2026
//      Author        : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;          // Row counter
    int j = 0;          // Column counter
    int iCnt = 1;       // Store and print consecutive numbers

    // Traverse each row
    for(i = 1; i <= iRow; i++)
    {
        // Traverse each column
        for(j = 1; j <= iCol; j++)
        {
            printf("%d ", iCnt);
            iCnt++;         // Move to next number
        }

        // Move cursor to next line
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////
//
//      Main Function
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;      // Store number of rows
    int iValue2 = 0;      // Store number of columns

    // Accept rows and columns from user
    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    // Function call
    Pattern(iValue1, iValue2);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//      Input  :
//      Rows = 3
//      Columns = 4
//
//      Output :
//      1 2 3 4
//      5 6 7 8
//      9 10 11 12
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(iRow * iCol)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////
