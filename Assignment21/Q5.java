
///////////////////////////////////////////////////////////////////
//
//      File Name : Q5.java
//      Project   : Logic Building Assignment 21
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : DivisibleLogic
//      Method Name: printDivisibleBy2and3
//      Input      : Integer
//      Output     : Void
//      Description: Print all numbers from 1 to N
//                   which are divisible by both
//                   2 and 3
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class DivisibleLogic
{
    void printDivisibleBy2and3(int n)
    {
        int i = 0;      // Loop counter

        // Display numbers divisible by both 2 and 3
        System.out.print("Numbers are : ");

        for(i = 1; i <= n; i++)
        {
            if((i % 2 == 0) && (i % 3 == 0))
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

public class Q5
{
    public static void main(String args[])
    {
        // Create object of DivisibleLogic class
        DivisibleLogic obj = new DivisibleLogic();

        // Function call
        obj.printDivisibleBy2and3(30);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 30
//
//      Output :
//      Numbers are : 6 12 18 24 30
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(n)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////
