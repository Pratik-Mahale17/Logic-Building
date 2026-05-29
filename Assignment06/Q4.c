/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  Table
//      Input:          integer
//      Output:         void
//      Description:    Prints multiplication table of given number
//      Date:           25/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
void Table(
            int iNo             // Input number
          )
{
    int i = 0;                  // Counter variable

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to print multiplication table
    for(i = 1; i <= 10; i++)
    {
        printf("%d ", iNo * i);
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to print multiplication table
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;             // Variable to store input number

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    Table(iValue);

    return 0;                   // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      5
//      Output:     5 10 15 20 25 30 35 40 45 50
//
/////////////////////////////////////////////////////////////////////////////////