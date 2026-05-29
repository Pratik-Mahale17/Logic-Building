/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  RectArea
//      Input:          float, float
//      Output:         double
//      Description:    Calculates area of rectangle using formula
//                      Area = width * height
//      Date:           26/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
double RectArea(
                    float fWidth,       // Input width
                    float fHeight       // Input height
               )
{
    double dArea = 0.0;             // Variable to store area

    // Calculate area of rectangle
    dArea = fWidth * fHeight;

    return dArea;                   // Return calculated area
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to calculate area of rectangle
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0;            // Variable to store width
    float fValue2 = 0.0;            // Variable to store height
    double dRet = 0.0;              // Variable to store result

    printf("Enter width\n");

    scanf("%f", &fValue1);

    printf("Enter height\n");

    scanf("%f", &fValue2);

    // Function call
    dRet = RectArea(fValue1, fValue2);

    // Display result
    printf("Area of rectangle is %lf", dRet);

    return 0;                       // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      5  4
//      Output:     Area of rectangle is 20.000000
//
/////////////////////////////////////////////////////////////////////////////////