
///////////////////////////////////////////////////////////////////
//
//      File Name : Q1.java
//      Project   : Logic Building Assignment 19
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : LeapYearLogic
//      Method Name: checkLeapYear
//      Input      : Integer
//      Output     : Void
//      Description: Check whether a given year is
//                   Leap Year or not
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class LeapYearLogic
{
    void checkLeapYear(int year)
    {
        if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        {
            System.out.println(year + " is a Leap Year");
        }
        else
        {
            System.out.println(year + " is not a Leap Year");
        }
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
        // Create object of LeapYearLogic class
        LeapYearLogic obj = new LeapYearLogic();

        // Function call
        obj.checkLeapYear(2024);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 2024
//
//      Output :
//      2024 is a Leap Year
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(1)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////

