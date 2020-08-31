// Count the no. of 1's

import java.io.*;
import java.lang.*;
import java.util.Scanner;

class CountOnes
{
 public static void main(String args[])
 {
  int count = 0;
  Scanner number = new Scanner(System.in);
  System.out.print("Enter a number : ");
  int n = number.nextInt(); 
  int d = n;
  String b = Integer.toBinaryString(n); 
  System.out.println("\nThe Binary form of " + n + " is " + b);
  while(n > 0)
  {
   n = n & (n-1);
   count++;
  }
  System.out.println("\nThe One's in the Binary form of " + d + " is : " + count);
 }
}
