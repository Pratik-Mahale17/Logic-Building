/////////////////////////////////////////////////////////////////////////////////
//
//      Include required header files
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//      Function name:  FhtoCs
//      Input:          float
//      Output:         double
//      Description:    Converts temperature from Fahrenheit to Celsius
//                      Formula: (F - 32) * (5/9)
//      Date:           26/05/2026
//      Author:         Pratik Subhash Mahale
//
/////////////////////////////////////////////////////////////////////////////////
double FhtoCs(
                float fTemp        // Input temperature in Fahrenheit
            )
{
    double dCelsius = 0.0;         // Variable to store result

    // Conversion logic
    dCelsius = (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;               // Return converted value
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Application to convert Fahrenheit to Celsius
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    float fValue = 0.0;            // Variable to store input temperature
    double dRet = 0.0;             // Variable to store result

    printf("Enter temperature in Fahrenheit\n");

    scanf("%f", &fValue);

    // Function call
    dRet = FhtoCs(fValue);

    // Display result
    printf("Temperature in Celsius is %lf", dRet);

    return 0;                      // Successful termination
}

/////////////////////////////////////////////////////////////////////////////////
//
//      Input:      34
//      Output:     Temperature in Celsius is 1.111111
//
/////////////////////////////////////////////////////////////////////////////////