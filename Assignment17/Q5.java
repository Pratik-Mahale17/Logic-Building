///////////////////////////////////////////////////////////////////
//
//      Class Name : Logic
//      Method Name: printTable
//      Input      : Integer
//      Output     : Void
//      Description: Display multiplication table from 1 to 10
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class Logic
{
    void printTable(int num)
    {
        int i = 0;     // Loop counter

        // Print multiplication table
        for(i = 1; i <= 10; i++)
        {
            System.out.println(num + " * " + i + " = " + (num * i));
        }
    }
}

///////////////////////////////////////////////////////////////////
//
//      Main Class
//
///////////////////////////////////////////////////////////////////

class Q5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.printTable(5);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 5
//
//      Output :
//
//      5 * 1 = 5
//      5 * 2 = 10
//      5 * 3 = 15
//      5 * 4 = 20
//      5 * 5 = 25
//      5 * 6 = 30
//      5 * 7 = 35
//      5 * 8 = 40
//      5 * 9 = 45
//      5 * 10 = 50
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(1)
//
//      Space Complexity : O(1)
//
//      (Loop executes exactly 10 times)
//
///////////////////////////////////////////////////////////////////