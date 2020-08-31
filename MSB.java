// MSB of the number in O(1)

import java.io.*;
import java.lang.*;
import java.util.*;

class MSB
{
 public static void main(String args[])
 {
  int i = 0,d,m;
  int myBin[] = new int[20];
  Scanner number = new Scanner(System.in);
  System.out.print("Enter a number : ");
  int n = number.nextInt();
  String b = Integer.toBinaryString(n);
  System.out.println("\nThe Binary form of " + n + " is " + b);
  ArrayList<Integer> myList = new ArrayList<Integer>(); 
  d = n;
  if(n != 0)
  {
   while(n>0)
   {
    myBin[i] = n%2;
    n = n/2;
    myList.add(myBin[i]);
    i++;
   }
   for(m = 0; m < myList.size(); m++)
   {
    if(myList.get(m) == 1)
    {
     m = m + 1;
     System.out.println("The MSB of " + d + " is in " + m + " position");
     break;
    }
   }
  }
  else
    System.out.println("\nThere is no MSB in 0");
 }
}
