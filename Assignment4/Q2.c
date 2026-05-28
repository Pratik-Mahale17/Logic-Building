/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  FactRev
//      Input:          integer
//      Output:         void
//      Description:    Prints factors of given number in reverse order
//      Date:           24/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
void FactRev(
                int iNo             // Input number
            )
{
    int i = 0;                      // Counter variable

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to find factors in reverse order
    for(i = iNo / 2; i >= 1; i--)
    {
        // Check whether i is factor
        if(iNo % i == 0)
        {
            printf("%d \t", i);
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to print factors in reverse order
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Variable to store input number

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    FactRev(iValue);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      12
//      Output:     6 4 3 2 1
//
/////////////////////////////////////////////////////////////////////////////////