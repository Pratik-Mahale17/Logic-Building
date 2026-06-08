///////////////////////////////////////////////////////////////////
//
//      Class Name : Logic
//      Method Name: sumOfDigits
//      Input      : Integer
//      Output     : Void
//      Description: Calculate and display the sum of digits
//      Date       : 08/06/2026
//      Author     : Pratik Subhash Mahale
//
///////////////////////////////////////////////////////////////////

class Logic
{
    void sumOfDigits(int num)
    {
        int digit = 0;     // Stores extracted digit
        int sum = 0;       // Stores sum of digits

        // Handle negative number
        if(num < 0)
        {
            num = -num;
        }

        // Calculate sum of digits
        while(num != 0)
        {
            digit = num % 10;
            sum = sum + digit;
            num = num / 10;
        }

        System.out.println("Sum of digits is : " + sum);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Main Class
//
///////////////////////////////////////////////////////////////////

class Q1
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.sumOfDigits(1234);
    }
}

///////////////////////////////////////////////////////////////////
//
//      Input  : 1234
//
//      Output : 10
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