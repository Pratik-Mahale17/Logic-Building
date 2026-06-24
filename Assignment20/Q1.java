
///////////////////////////////////////////////////////////////////
//
//      File Name : Q1.java
//      Project   : Logic Building Assignment 20
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : EvenSumLogic
//      Method Name: sumEvenNumbers
//      Input      : Integer
//      Output     : Void
//      Description: Find the sum of all even numbers
//                   up to N
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class EvenSumLogic
{
    void sumEvenNumbers(int n)
    {
        int i = 0;      // Loop counter
        int iSum = 0;   // Store summation

        // Calculate sum of even numbers
        for(i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
            {
                iSum = iSum + i;
            }
        }

        // Display result
        System.out.println("Summation of even numbers is : " + iSum);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Main Class
//
///////////////////////////////////////////////////////////////////

public class Q1
{
    public static void main(String args[])
    {
        // Create object of EvenSumLogic class
        EvenSumLogic obj = new EvenSumLogic();

        // Function call
        obj.sumEvenNumbers(10);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 10
//
//      Output :
//      Summation of even numbers is : 30
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(n)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////
