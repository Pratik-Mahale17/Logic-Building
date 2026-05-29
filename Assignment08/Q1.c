/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  CircleArea
//      Input:          float
//      Output:         double
//      Description:    Calculates area of circle using formula
//                      Area = 3.14 * radius * radius
//      Date:           26/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
double CircleArea(
                    float fRadius        // Input radius
                 )
{
    double dArea = 0.0;             // Variable to store area

    // Calculate area of circle
    dArea = 3.14 * fRadius * fRadius;

    return dArea;                   // Return calculated area
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to calculate area of circle
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    float fValue = 0.0;             // Variable to store radius
    double dRet = 0.0;              // Variable to store result

    printf("Enter radius\n");

    scanf("%f", &fValue);

    // Function call
    dRet = CircleArea(fValue);

    // Display result
    printf("Area of circle is %lf", dRet);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      5
//      Output:     Area of circle is 78.500000
//
/////////////////////////////////////////////////////////////////////////////////