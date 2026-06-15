///////////////////////////////////////////////////////////////////
//
//      File Name : Q2.java
//      Project   : Logic Building Assignment 18
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : EvenNumberLogic
//      Method Name: printEvenNumbers
//      Input      : Integer
//      Output     : Void
//      Description: Print all even numbers up to N
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class EvenNumberLogic
{
    void printEvenNumbers(int n)
    {
        int i = 0;      // Loop counter

        // Print all even numbers from 1 to n
        for(i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
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

public class Q2
{
    public static void main(String args[])
    {
        // Create object of EvenNumberLogic class
        EvenNumberLogic obj = new EvenNumberLogic();

        // Function call
        obj.printEvenNumbers(20);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 20
//
//      Output :
//      2 4 6 8 10 12 14 16 18 20
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(n)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////
