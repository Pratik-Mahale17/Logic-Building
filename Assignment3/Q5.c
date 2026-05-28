/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Create user defined datatype as BOOL
//
/////////////////////////////////////////////////////////////////////////////////
typedef int BOOL;

/////////////////////////////////////////////////////////////////////////////////
//
//      Define constants for TRUE and FALSE
//
/////////////////////////////////////////////////////////////////////////////////
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  ChkVowel
//      Input:          character
//      Output:         BOOL
//      Description:    Checks whether character is vowel or not
//      Date:           24/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
BOOL ChkVowel(
                    char cValue         // Input character
              )
{
    // Check whether character is vowel
    if((cValue == 'a') || (cValue == 'e') || 
       (cValue == 'i') || (cValue == 'o') || 
       (cValue == 'u') || (cValue == 'A') || 
       (cValue == 'E') || (cValue == 'I') || 
       (cValue == 'O') || (cValue == 'U'))
    {
        return TRUE;                    // Return TRUE if vowel
    }
    else
    {
        return FALSE;                   // Return FALSE if not vowel
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to check whether character is vowel or not
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    char cValue = '\0';                 // Variable to store character
    BOOL bRet = FALSE;                  // Variable to store return value

    printf("Enter character\n");

    scanf("%c", &cValue);

    // Function call
    bRet = ChkVowel(cValue);

    // Display result
    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;                           // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      E
//      Output:     TRUE
//
//      Input:      d
//      Output:     FALSE
//
/////////////////////////////////////////////////////////////////////////////////