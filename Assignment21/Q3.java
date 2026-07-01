///////////////////////////////////////////////////////////////////
//
//      File Name : Q3.java
//      Project   : Logic Building Assignment 21
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : FactorLogic
//      Method Name: displayFactors
//      Input      : Integer
//      Output     : Void
//      Description: Display all factors of
//                   the given number
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class FactorLogic
{
    void displayFactors(int num)
    {
        int i = 0;      // Loop counter

        // Convert negative number to positive
        if(num < 0)
        {
            num = -num;
        }

        // Display all factors
        System.out.print("Factors are : ");

        for(i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                System.out.print(i + " ");
            }
        }
    }
}

///////////////////////////////////////////////////////////////////
//
//      Main Class
//
///////////////////////////////////////////////////////////////////

public class Q3
{
    public static void main(String args[])
    {
        // Create object of FactorLogic class
        FactorLogic obj = new FactorLogic();

        // Function call
        obj.displayFactors(12);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 12
//
//      Output :
//      Factors are : 1 2 3 4 6 12
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(n)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////

