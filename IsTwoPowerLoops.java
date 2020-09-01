// To check a number is Two power or not through loops

import java.io.*;
import java.lang.*;
import java.util.Scanner;

class IsTwoPowerLoops
{
 public static void main(String args[])
 {
  System.out.print("Enter a number : ");
  Scanner number = new Scanner(System.in);
  int n = number.nextInt();
  int d = n, count = 0;
  if(n != 0)
  { 
   while(n > 0)
   {
    if(n == 1) 
    { 
     System.out.println("The number is " + d + " a Two power"); 
     break;
    }
    if(n%2 == 0)
    {
      n = n/2;
    }
    else
    {
     System.out.println("The number is " + d + " not a Two power");
     break;
    }
   }
  }
  else
   System.out.println("The number " + d + " is not a Two power");
 }
}