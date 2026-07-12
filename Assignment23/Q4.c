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
//      Description   : Display '*' at odd columns
//                      and '#' at even columns for
//                      every row
//      Date          : 08/06/2026
//      Author        : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;      // Row counter
    int j = 0;      // Column counter

    // Traverse each row
    for(i = 1; i <= iRow; i++)
    {
        // Traverse each column
        for(j = 1; j <= iCol; j++)
        {
            // Print '*' at odd position
            if(j % 2 != 0)
            {
                printf("* ");
            }
            // Print '#' at even position
            else
            {
                printf("# ");
            }
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
//      * # * #
//      * # * #
//      * # * #
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(iRow * iCol)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////

