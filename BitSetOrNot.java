//Verify Ith bit is SET or not

import java.io.*;
import java.lang.*;
import java.util.*;

class BitSetOrNot
{
 public static void main(String args[])
 {
  Scanner number = new Scanner(System.in);
  System.out.print("Enter a number : ");
  int n = number.nextInt();
  String b = Integer.toBinaryString(n);
  System.out.println("\nThe Binary form of " + n + " is " + b);
  System.out.print("\nEnter the bit which we want to check : ");
  int i = number.nextInt();
  if((n & (1 << (i-1))) == 0)
    System.out.println("\nIn given number " + n + " the " + i + "-bit is NOT SET");
  else
    System.out.println("\nIn given number " + n + " the " + i + "-bit is SET");
 }
}

