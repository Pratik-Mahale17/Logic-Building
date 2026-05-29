/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  KMtoMeter
//      Input:          integer
//      Output:         integer
//      Description:    Converts distance from kilometre to meter
//                      1 kilometre = 1000 meter
//      Date:           26/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
int KMtoMeter(
                int iNo         // Input distance in kilometre
             )
{
    int iAns = 0;               // Variable to store result

    // Conversion logic
    iAns = iNo * 1000;

    return iAns;                // Return converted value
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to convert KM to Meter
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;             // Variable to store input distance
    int iRet = 0;               // Variable to store result

    printf("Enter distance in kilometre\n");

    scanf("%d", &iValue);

    // Function call
    iRet = KMtoMeter(iValue);

    // Display result
    printf("%d", iRet);

    return 0;                   // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      5
//      Output:     5000
//
/////////////////////////////////////////////////////////////////////////////////