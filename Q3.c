///////////////////////////////////////////////////////////////////
//
//      File Name : Q3.c
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
//      Description   : Display lowercase alphabets
//                      in odd rows and numbers
//                      in even rows.
//
///////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;          // Row counter
    int j = 0;          // Column counter
    char ch;            // Character variable
    int iNo;            // Number variable

    // Traverse each row
    for(i = 1; i <= iRow; i++)
    {
        // Odd rows
        if(i % 2 != 0)
        {
            ch = 'a';       // Start from 'a'

            // Print alphabets
            for(j = 1; j <= iCol; j++)
            {
                printf("%c ", ch);
                ch++;
            }
        }
        // Even rows
        else
        {
            iNo = 1;        // Start from 1

            // Print numbers
            for(j = 1; j <= iCol; j++)
            {
                printf("%d ", iNo);
                iNo++;
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
//      Rows = 5
//      Columns = 5
//
//      Output :
//      a b c d e
//      1 2 3 4 5
//      a b c d e
//      1 2 3 4 5
//      a b c d e
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(iRow * iCol)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////

