///////////////////////////////////////////////////////////////////
//
//      File Name : Q1.java
//      Project   : Logic Building Assignment 21
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Class Name : ProductDigitLogic
//      Method Name: productOfDigits
//      Input      : Integer
//      Output     : Void
//      Description: Calculate the product of
//                   all digits of a number
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class ProductDigitLogic
{
    void productOfDigits(int num)
    {
        int digit = 0;          // Store extracted digit
        int iProduct = 1;       // Store multiplication result

        // Convert negative number to positive
        if(num < 0)
        {
            num = -num;
        }

        // Calculate product of digits
        while(num != 0)
        {
            digit = num % 10;

            iProduct = iProduct * digit;

            num = num / 10;
        }

        // Display result
        System.out.println("Product of digits is : " + iProduct);
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
        // Create object of ProductDigitLogic class
        ProductDigitLogic obj = new ProductDigitLogic();

        // Function call
        obj.productOfDigits(234);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 234
//
//      Output :
//      Product of digits is : 24
//
///////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
//
//      Input  : 105
//
//      Output :
//      Product of digits is : 0
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

