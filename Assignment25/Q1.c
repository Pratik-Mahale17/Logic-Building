///////////////////////////////////////////////////////////////////
//
//      File Name : Q1.c
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
//      Description   : Display consecutive numbers.
//                      After 9, numbering starts
//                      again from 1.
//
///////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;          // Row counter
    int j = 0;          // Column counter
    int iCnt = 1;       // Number to be displayed

    // Traverse each row
    for(i = 1; i <= iRow; i++)
    {
        // Traverse each column
        for(j = 1; j <= iCol; j++)
        {
            printf("%d ", iCnt);

            iCnt++;

            // Restart from 1 after 9
            if(iCnt == 10)
            {
                iCnt = 1;
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

    // Accept rows and columns
    printf("Enter number of rows and columns : ");
    scanf("%d %d",&iValue1,&iValue2);

    // Function call
    Pattern(iValue1,iValue2);

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
//      5 6 7 8
//      9 1 2 3
//      4 5 6 7
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(iRow * iCol)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////

