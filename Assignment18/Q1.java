///////////////////////////////////////////////////////////////////
//
//      File Name : Q1.java
//      Project   : Logic Building Assignment 18
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : PrimeLogic
//      Method Name: checkPrime
//      Input      : Integer
//      Output     : Void
//      Description: Check whether a number is Prime or not
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class PrimeLogic
{
    void checkPrime(int num)
    {
        int i = 0;

        if(num <= 1)
        {
            System.out.println(num + " is not a Prime Number");
            return;
        }

        // Check divisibility
        for(i = 2; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                System.out.println(num + " is not a Prime Number");
                return;
            }
        }

        System.out.println(num + " is a Prime Number");
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
        // Create object of PrimeLogic class
        PrimeLogic obj = new PrimeLogic();

        // Function call
        obj.checkPrime(11);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 11
//
//      Output :
//      11 is a Prime Number
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(n)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////
