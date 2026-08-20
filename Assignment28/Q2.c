///////////////////////////////////////////////////////////////////
//
//      File Name : Q2.c
//      Project   : Logic Building Pattern Assignment
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
///////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Input         : Integer, Integer
//      Output        : Void
//      Description   : Display '#' on the secondary diagonal,
//                      '*' before the diagonal and '@' after
//                      the diagonal.
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
            // Print '#' on secondary diagonal
            if(j == (iCol - i + 1))
            {
                printf("# ");
            }
            // Print '*' before secondary diagonal
            else if(j < (iCol - i + 1))
            {
                printf("* ");
            }
            // Print '@' after secondary diagonal
            else
            {
                printf("@ ");
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
//      Rows = 4
//      Columns = 4
//
//      Output :
//      * * * #
//      * * # @
//      * # @ @
//      # @ @ @
//
///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(iRow * iCol)
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////
