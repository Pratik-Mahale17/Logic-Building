/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  DisplayEvenFactor
//      Input:          integer
//      Output:         void
//      Description:    Prints even factors of given number
//      Date:           24/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
void DisplayEvenFactor(
                            int iNo        // Input number
                      )
{
    int i = 0;                             // Counter variable

    // Convert negative number into positive
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    // Loop to find factors
    for(i = 1; i <= iNo ; i++)
    {
        // Check whether number is factor and even
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d\t ",i);
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to print even factors of given number
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                        // Variable to store input number

    printf("Enter number\n");

    scanf("%d",&iValue);

    // Function call
    DisplayEvenFactor(iValue);

    return 0;                              // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:     36
//      Output:    2        4       6       12      18      36   
//
/////////////////////////////////////////////////////////////////////////////////