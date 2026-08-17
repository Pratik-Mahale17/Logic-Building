///////////////////////////////////////////////////////////////////
//
//      File Name : Q4.c
//      Project   : Logic Building Pattern Assignment
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Input         : Integer, Integer
//      Output        : Void
//      Description   : Display '*' on the border.
//                      Display '#' in the upper-left inner
//                      part and '$' in the lower-right
//                      inner part.
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
            // First row or last row
            if((i == 1) || (i == iRow))
            {
                printf("* ");
            }
            // First column
            else if(j == 1)
            {
                printf("* ");
            }
            // Last column
            else if(j == iCol)
            {
                printf("* ");
            }
            // Upper-left inner triangle
            else if(j <= (iCol - i))
            {
                printf("# ");
            }
            // Lower-right inner triangle
            else
            {
                printf("$ ");
            }
        }

        // Move to next line
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

    // Accept rows and columns
    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    // Function call
    Pattern(iValue1, iValue2);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//      Input :
//      Rows = 6
//      Columns = 6
//
//      Output :
//      * * * * * *
//      * # # # * *
//      * # # * $ *
//      * # * $ $ *
//      * * $ $ $ *
//      * * * * * *
//
///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(iRow * iCol)
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////