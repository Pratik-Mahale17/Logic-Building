/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  DisplayConvert
//      Input:          character
//      Output:         void
//      Description:    Converts lowercase character into uppercase
//                      and uppercase character into lowercase
//      Date:           24/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
void DisplayConvert(
                        char CValue        // Input character
                   )
{
    // Check whether character is lowercase
    if((CValue >= 'a') && (CValue <= 'z'))
    {
        printf("%c", CValue - 32);         // Convert into uppercase
    }
    // Check whether character is uppercase
    else if((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("%c", CValue + 32);         // Convert into lowercase
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to convert case of character
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    char cValue = '\0';                    // Variable to store character

    printf("Enter character\n");

    scanf("%c", &cValue);

    // Function call
    DisplayConvert(cValue);

    return 0;                              // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      a
//      Output:     A
//
//      Input:      D
//      Output:     d
//
/////////////////////////////////////////////////////////////////////////////////