
///////////////////////////////////////////////////////////////////
//
//      File Name : Q2.java
//      Project   : Logic Building Assignment 19
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : GradeLogic
//      Method Name: displayGrade
//      Input      : Integer
//      Output     : Void
//      Description: Display grade according to marks
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class GradeLogic
{
    void displayGrade(int marks)
    {
        if((marks < 0) || (marks > 100))
        {
            System.out.println("Invalid Marks");
        }
        else if(marks >= 75)
        {
            System.out.println("Grade : Distinction");
        }
        else if(marks >= 60)
        {
            System.out.println("Grade : First Class");
        }
        else if(marks >= 50)
        {
            System.out.println("Grade : Second Class");
        }
        else if(marks >= 35)
        {
            System.out.println("Grade : Pass Class");
        }
        else
        {
            System.out.println("Grade : Fail");
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
        // Create object of GradeLogic class
        GradeLogic obj = new GradeLogic();

        // Function call
        obj.displayGrade(82);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 82
//
//      Output :
//      Grade : Distinction
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Input  : 65
//
//      Output :
//      Grade : First Class
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(1)
//
//      Space Complexity : O(1)
//
///////////////////////////////////////////////////////////////////

