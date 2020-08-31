// To check a number is Two power or not

import java.io.*;
import java.lang.*;
import java.util.Scanner;

class IsTwoPower
{
 public static void main(String args[])
 {
  System.out.print("Enter a number : ");
  Scanner number = new Scanner(System.in);
  int n = number.nextInt();
  if ((n & (n-1)) == 0)
    System.out.println(n + " is a power of two");
  else 
    System.out.println(n + " is not a power of two");
 }
}