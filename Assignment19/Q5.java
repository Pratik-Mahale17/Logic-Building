
///////////////////////////////////////////////////////////////////
//
//      File Name : Q5.java
//      Project   : Logic Building Assignment 19
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : PowerLogic
//      Method Name: calculatePower
//      Input      : Two Integers
//      Output     : Void
//      Description: Calculate power of a number
//                   using loops
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class PowerLogic
{
    void calculatePower(int base, int exp)
    {
        int i = 0;          // Loop counter
        int power = 1;      // Stores result

        // Calculate power
        for(i = 1; i <= exp; i++)
        {
            power = power * base;
        }

        // Display result
        System.out.println(base + " raised to " + exp + " = " + power);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Main Class
//
///////////////////////////////////////////////////////////////////

public class Q5
{
    public static void main(String args[])
    {
        // Create object of PowerLogic class
        PowerLogic obj = new PowerLogic();

        // Function call
        obj.calculatePower(2, 5);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : Base = 2, Exponent = 5
//
//      Output :
//      2 raised to 5 = 32
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Input  : Base = 3, Exponent = 4
//
//      Output :
//      3 raised to 4 = 81
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(exp)
//
//      Space Complexity : O(1)
//
//      Where exp = Exponent value
//
///////////////////////////////////////////////////////////////////
