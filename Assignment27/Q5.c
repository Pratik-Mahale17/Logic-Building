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
//      Description   : Display increasing numbers in each row.
//                      Each next row starts from the next number
//                      and prints up to the given column limit.
//
///////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;      // Row counter
    int j = 0;      // Column counter

    // Traverse each row
    for(i = 1; i <= iRow; i++)
    {
        // Start printing from current row number
        for(j = i; j <= iCol; j++)
        {
            printf("%d ", j);
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
//      Input :
//      Rows = 4
//      Columns = 4
//
//      Output :
//      1 2 3 4
//      2 3 4
//      3 4
//      4
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(iRow * iCol)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////

