///////////////////////////////////////////////////////////////////
//
//      File Name : Q4.java
//      Project   : Logic Building Assignment 21
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : CountFactorLogic
//      Method Name: countFactors
//      Input      : Integer
//      Output     : Void
//      Description: Count the total number of
//                   factors of a given number
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class CountFactorLogic
{
    void countFactors(int num)
    {
        int i = 0;          // Loop counter
        int iCount = 0;     // Store factor count

        // Convert negative number to positive
        if(num < 0)
        {
            num = -num;
        }

        // Count factors
        for(i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                iCount++;
            }
        }

        // Display result
        System.out.println("Total factors are : " + iCount);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Main Class
//
///////////////////////////////////////////////////////////////////

public class Q4
{
    public static void main(String args[])
    {
        // Create object of CountFactorLogic class
        CountFactorLogic obj = new CountFactorLogic();

        // Function call
        obj.countFactors(20);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 20
//
//      Output :
//      Total factors are : 6
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Factors of 20 : 1 2 4 5 10 20
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(n)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////

