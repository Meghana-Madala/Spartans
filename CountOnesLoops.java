// Count the no. of 1's

import java.io.*;
import java.lang.*;
import java.util.Scanner;

class CountOnesLoops
{
 public static void main(String args[])
 {
  int count = 0, i, k;
  Scanner number = new Scanner(System.in);
  System.out.print("Enter a number : ");
  int n = number.nextInt(); 
  int d = n;
  String b = Integer.toBinaryString(n); 
  System.out.println("\nThe Binary form of " + n + " is " + b);
  while(n > 0)
  {
   k = n%2;
   if(k == 1)
     count++;
   n = n/2;
  }
  System.out.println("\nThe no. of ones are : " + count);
 }
} 