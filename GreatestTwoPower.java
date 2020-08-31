// Greatest two power less than given number

import java.lang.*;
import java.io.*;
import java.util.Scanner;

class GreatestTwoPower
{
 public static void main(String args[])
 {
  int i = 0 , m , k , d = 0 , dec = 0 , great;
  Scanner number = new Scanner(System.in);
  System.out.print("Enter a number : ");
  int n = number.nextInt();
  int myBin[] = new int[20];
  m = n;
  System.out.println("\nGiven number is : " + m);
  while(n > 0)
  {
   myBin[i++] = n%2;
   n = n/2;
  }
  for(k=i-1;k>=0;k--)
  {
   if(myBin[k] == 0)
     myBin[k] = 1;
   dec += myBin[k] * Math.pow(2,d++);
  }
  if(dec > 0)
  {
    great = (dec + 1)/2;
    System.out.println("\nThe greatest two power less than " + m + " is : " + great);
  }
  else
    System.out.println("\nThere is no Two power lessthan " + m);
 }
}