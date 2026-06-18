
///////////////////////////////////////////////////////////////////
//
//      File Name : Q5.java
//      Project   : Logic Building Assignment 18
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : SignLogic
//      Method Name: checkSign
//      Input      : Integer
//      Output     : Void
//      Description: Check whether a number is
//                   Positive, Negative or Zero
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class SignLogic
{
    void checkSign(int num)
    {
        // Check whether the number is positive
        if(num > 0)
        {
            System.out.println(num + " is a Positive Number");
        }
        // Check whether the number is negative
        else if(num < 0)
        {
            System.out.println(num + " is a Negative Number");
        }
        // Otherwise the number is zero
        else
        {
            System.out.println("The number is Zero");
        }
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
        // Create object of SignLogic class
        SignLogic obj = new SignLogic();

        // Function call
        obj.checkSign(-8);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : -8
//
//      Output :
//      -8 is a Negative Number
//
//      Input  : 10
//
//      Output :
//      10 is a Positive Number
//
//      Input  : 0
//
//      Output :
//      The number is Zero
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(1)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////
