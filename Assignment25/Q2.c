///////////////////////////////////////////////////////////////////
//
//      File Name : Q2.c
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
//      Description   : Display even numbers in odd
//                      rows and odd numbers in even
//                      rows.
//
///////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;      // Row counter
    int j = 0;      // Column counter
    int iNo = 0;    // Number to print

    // Traverse each row
    for(i = 1; i <= iRow; i++)
    {
        // Odd rows
        if(i % 2 != 0)
        {
            iNo = 2;        // First even number

            // Print even numbers
            for(j = 1; j <= iCol; j++)
            {
                printf("%d ", iNo);
                iNo = iNo + 2;
            }
        }
        // Even rows
        else
        {
            iNo = 1;        // First odd number

            // Print odd numbers
            for(j = 1; j <= iCol; j++)
            {
                printf("%d ", iNo);
                iNo = iNo + 2;
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
//      Columns = 5
//
//      Output :
//      2 4 6 8 10
//      1 3 5 7 9
//      2 4 6 8 10
//      1 3 5 7 9
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(iRow * iCol)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////

