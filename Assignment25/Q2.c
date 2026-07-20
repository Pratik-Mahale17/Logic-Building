
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
//      Description   : Display uppercase alphabets
//                      on odd rows and lowercase
//                      alphabets on even rows
//      Date          : 08/06/2026
//      Author        : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;          // Row counter
    int j = 0;          // Column counter
    char ch;            // Character variable

    // Traverse each row
    for(i = 1; i <= iRow; i++)
    {
        // Odd row -> Uppercase
        if(i % 2 != 0)
        {
            ch = 'A';

            for(j = 1; j <= iCol; j++)
            {
                printf("%c ", ch);
                ch++;
            }
        }
        // Even row -> Lowercase
        else
        {
            ch = 'a';

            for(j = 1; j <= iCol; j++)
            {
                printf("%c ", ch);
                ch++;
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
//      Rows = 4
//      Columns = 4
//
//      Output :
//      A B C D
//      a b c d
//      A B C D
//      a b c d
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(iRow * iCol)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////
