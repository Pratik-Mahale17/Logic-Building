///////////////////////////////////////////////////////////////////
//
//      File Name : Q5.c
//      Project   : Logic Building Pattern Assignment
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Input         : Integer, Integer
//      Output        : Void
//      Description   : Display numbers on the first and last row.
//                      For middle rows, display 1, row number,
//                      and last column number.
//
///////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;      // Row counter
    int j = 0;      // Column counter

    // Traverse each row
    for(i = 1; i <= iRow + 1; i++)
    {
        // First and last row
        if((i == 1) || (i == iRow + 1))
        {
            for(j = 1; j <= iCol + 1; j++)
            {
                printf("%d ", j);
            }
        }
        else
        {
            // First number
            printf("1 ");

            // Middle number
            printf("%d ", i);

            // Last number
            printf("%d ", iCol + 1);
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
//      Rows = 4
//      Columns = 4
//
//      Output :
//      1 2 3 4 5
//      1 2 5
//      1 3 5
//      1 4 5
//      1 2 3 4 5
//
///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(iRow * iCol)
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////