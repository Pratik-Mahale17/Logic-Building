
///////////////////////////////////////////////////////////////////
//
//      File Name : Q3.java
//      Project   : Logic Building Assignment 18
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : OddNumberLogic
//      Method Name: printOddNumbers
//      Input      : Integer
//      Output     : Void
//      Description: Print all odd numbers up to N
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class OddNumberLogic
{
    void printOddNumbers(int n)
    {
        int i = 0;      // Loop counter

        // Print all odd numbers from 1 to n
        for(i = 1; i <= n; i++)
        {
            if(i % 2 != 0)
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
        // Create object of OddNumberLogic class
        OddNumberLogic obj = new OddNumberLogic();

        // Function call
        obj.printOddNumbers(20);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 20
//
//      Output :
//      1 3 5 7 9 11 13 15 17 19
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(n)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////
