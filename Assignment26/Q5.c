
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
//      Description   : Display column numbers on
//                      first and last row.
//                      Display first and last
//                      column numbers and '*'
//                      inside the remaining rows.
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
            // First row or Last row
            if((i == 1) || (i == iRow))
            {
                printf("%d ", j);
            }
            // First column
            else if(j == 1)
            {
                printf("1 ");
            }
            // Last column
            else if(j == iCol)
            {
                printf("%d ", iCol);
            }
            // Remaining middle part
            else
            {
                printf("* ");
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
//      Input :
//      Rows = 4
//      Columns = 4
//
//      Output :
//      1 2 3 4
//      1 * * 4
//      1 * * 4
//      1 2 3 4
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(iRow * iCol)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////

