///////////////////////////////////////////////////////////////////
//
//      File Name : Program2.java
//      Project   : Logic Building Assignment 17
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : PalindromeLogic
//      Method Name: checkPalindrome
//      Input      : Integer
//      Output     : Void
//      Description: Check whether the given number
//                   is Palindrome or not
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class PalindromeLogic
{
    void checkPalindrome(int num)
    {
        int iTemp = num;        // Store original number
        int iDigit = 0;         // Store extracted digit
        int iReverse = 0;       // Store reversed number

        // If number is negative convert it to positive
        if(num < 0)
        {
            num = -num;
            iTemp = num;
        }

        // Reverse the number
        while(num != 0)
        {
            iDigit = num % 10;
            iReverse = (iReverse * 10) + iDigit;
            num = num / 10;
        }

        // Check palindrome
        if(iTemp == iReverse)
        {
            System.out.println("Palindrome Number");
        }
        else
        {
            System.out.println("Not a Palindrome Number");
        }
    }
}

///////////////////////////////////////////////////////////////////
//
//      Main Class
//
///////////////////////////////////////////////////////////////////

class Q2
{
    public static void main(String args[])
    {
        // Create object of PalindromeLogic class
        PalindromeLogic obj = new PalindromeLogic();

        // Function call
        obj.checkPalindrome(121);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 121
//      Output : Palindrome Number
//
//      Input  : 123
//      Output : Not a Palindrome Number
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Time Complexity : O(d)
//
//      Space Complexity : O(1)
//
//      Where d = Number of digits
//
///////////////////////////////////////////////////////////////////