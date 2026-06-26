
///////////////////////////////////////////////////////////////////
//
//      File Name : Q3.java
//      Project   : Logic Building Assignment 20
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : PerfectLogic
//      Method Name: checkPerfect
//      Input      : Integer
//      Output     : Void
//      Description: Check whether a number is
//                   Perfect Number or not
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class PerfectLogic
{
    void checkPerfect(int num)
    {
        int i = 0;          // Loop counter
        int iSum = 0;       // Store sum of factors

        // Find proper factors and calculate sum
        for(i = 1; i <= (num / 2); i++)
        {
            if(num % i == 0)
            {
                iSum = iSum + i;
            }
        }

        // Check perfect number
        if(iSum == num)
        {
            System.out.println(num + " is a Perfect Number");
        }
        else
        {
            System.out.println(num + " is not a Perfect Number");
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
        // Create object of PerfectLogic class
        PerfectLogic obj = new PerfectLogic();

        // Function call
        obj.checkPerfect(6);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 6
//
//      Output :
//      6 is a Perfect Number
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Input  : 10
//
//      Output :
//      10 is not a Perfect Number
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(n)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////
