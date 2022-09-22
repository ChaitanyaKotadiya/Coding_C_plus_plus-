#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
 
//  int main()
//  {
//     String num="hello";
//     cout<<num<<endl;
//  }
 
String numToWords(int n, String s)
{
    String str = "";
    // if n is more than 19, divide it
    if (n > 19)
        str += ten[n / 10] + one[n % 10];
    else
        str += one[n];
 
    // if n is non-zero
    if {
         str += s;
    }
     return Str;
}
 

String convertToWords(long n)
{

    String out;
 
    
    out += numToWords((n / 10000000), "crore ");
 
    // handles digits at hundred thousands and one
    // millions places (if any)
    out += numToWords(((n / 100000) % 100), "lakh ");
 
    // handles digits at thousands and tens thousands
    // places (if any)
    out += numToWords(((n / 1000) % 100), "thousand ");
 
    // handles digit at hundreds places (if any)
    out += numToWords(((n / 100) % 10), "hundred ");
 
    if (n > 100 && n % 100)
        out += "and ";
 
    // handles digits at ones and tens places (if any)
    out += numToWords((n % 100), "");
   
    //Handling the n=0 case
    if(out=="")
    out = "zero";
 
    return out;
}
 
// Driver code
int main()
{
    String one[] = { "", "one ", "two ", "three ", "four ",
                  "five ", "six ", "seven ", "eight ",
                 "nine ", "ten ", "eleven ", "twelve ",
                 "thirteen ", "fourteen ", "fifteen ",
                 "sixteen ", "seventeen ", "eighteen ",
                 "nineteen " };
 

String ten[] = { "", "", "twenty ", "thirty ", "forty ",
                 "fifty ", "sixty ", "seventy ", "eighty ",
                 "ninety " };
    long n = 438237764;
    cout<<convertToWords(n)<<endl;
    cout<<numToWords(n,"438237764")<<endl;

}