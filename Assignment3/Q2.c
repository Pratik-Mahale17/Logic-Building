/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  DisplayFactor
//      Input:          integer
//      Output:         void
//      Description:    Prints factor 1 and all even factors of given number
//      Date:           24/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
void DisplayFactor(
                      int iNo           // Input number
                  )
{
    int i = 0;                         // Counter variable

    // Convert negative number into positive
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    // Loop to find factors
    for(i = 1; i <= iNo; i++)
    {
        // Check whether number is factor
        // and either even or equal to 1
        if((iNo % i == 0) && ((i % 2 == 0) || (i == 1)))
        {
            printf("%d ", i);
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to print factor 1 and even factors of number
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                    // Variable to store input number

    printf("Enter number\n");

    scanf("%d", &iValue);

    // Function call
    DisplayFactor(iValue);

    return 0;                          // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      24
//      Output:     1 2 4 6 8 12 24
//
/////////////////////////////////////////////////////////////////////////////////