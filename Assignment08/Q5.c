/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  SquareMeter
//      Input:          integer
//      Output:         double
//      Description:    Converts area from square feet to square meter
//                      1 square feet = 0.0929 square meter
//      Date:           26/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
double SquareMeter(
                        int iValue     // Input area in square feet
                  )
{
    double dArea = 0.0;             // Variable to store result

    // Conversion logic
    dArea = iValue * 0.0929;

    return dArea;                   // Return converted value
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to convert square feet to square meter
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;                 // Variable to store input area
    double dRet = 0.0;              // Variable to store result

    printf("Enter area in square feet\n");

    scanf("%d", &iValue);

    // Function call
    dRet = SquareMeter(iValue);

    // Display result
    printf("%lf", dRet);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      5
//      Output:     0.464500
//
/////////////////////////////////////////////////////////////////////////////////