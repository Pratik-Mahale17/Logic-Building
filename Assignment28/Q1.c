///////////////////////////////////////////////////////////////////
//
//      File Name : Q1.c
//      Project   : Logic Building Pattern Assignment
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Input         : Integer, Integer
//      Output        : Void
//      Description   : Display '#' on the secondary diagonal
//                      and '*' at all other positions.
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
            // Print '*' at remaining positions
            else
            {
                printf("* ");
            }
        }

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
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

///////////////////////////////////////////////////////////////////
//
//      Input : 4 4
//
//      Output :
//      * * * #
//      * * # *
//      * # * *
//      # * * *
//
///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(iRow * iCol)
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////