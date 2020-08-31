//Division without / Operator

import java.lang.*;
import java.io.*;
import java.util.*;
 
class Division
{
 public static void main(String args[])
 {
  long i,var = 0,q = 0;
  Scanner num = new Scanner(System.in);
  System.out.print("Enter the dividend : ");
  long dividend = num.nextLong();
  System.out.print("\nEnter the divisor : ");
  long divisor = num.nextLong();
  for(i = 31;i >= 0; i--)
  {
   if((var + (divisor << i)) <= dividend)
   {
    var = var + (divisor << i);
    q = q | (1 << i);
   }
  }
  System.out.println("Quotient is : " + q);
 }
}
