///////////////////////////////////////////////////////////////////
//
//      File Name : Q4.c
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
//      Description   : Display row numbers in
//                      reverse order for each row
//      Date          : 08/06/2026
//      Author        : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;      // Row counter
    int j = 0;      // Column counter

    // Traverse rows in reverse order
    for(i = iRow; i >= 1; i--)
    {
        // Print current row number in all columns
        for(j = 1; j <= iCol; j++)
        {
            printf("%d ", i);
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
//      Rows = 4
//      Columns = 5
//
//      Output :
//      4 4 4 4 4
//      3 3 3 3 3
//      2 2 2 2 2
//      1 1 1 1 1
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(iRow * iCol)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////
