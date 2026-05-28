/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  NonFact
//      Input:          integer
//      Output:         void
//      Description:    Prints non factors of given number
//      Date:           24/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
void NonFact(
                int iNo             // Input number
            )
{
    int i = 0;                      // Counter variable

    // Convert negative number into positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Loop to find non factors
    for(i = 1; i < iNo; i++)
    {
        // Check whether i is not factor
        if(iNo % i != 0)
        {
            printf("%d ", i);
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to print non factors of given number
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Variable to store input number

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    NonFact(iValue);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      12
//      Output:     5 7 8 9 10 11
//
/////////////////////////////////////////////////////////////////////////////////