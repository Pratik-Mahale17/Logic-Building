/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  TableRev
//      Input:          integer
//      Output:         void
//      Description:    Prints reverse multiplication table of given number
//      Date:           25/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
void TableRev(
                int iNo             // Input number
             )
{
    int i = 0;                  // Counter variable

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to print multiplication table in reverse order
    for(i = 10; i >= 1; i--)
    {
        printf("%d ", iNo * i);
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to print reverse multiplication table
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;             // Variable to store input number

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    TableRev(iValue);

    return 0;                   // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      5
//      Output:     50 45 40 35 30 25 20 15 10 5
//
/////////////////////////////////////////////////////////////////////////////////