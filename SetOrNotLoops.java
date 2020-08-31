//Verify Nth bit is SET or not

import java.io.*;
import java.lang.*;
import java.util.*;

class SetOrNotLoops
{
 public static void main(String args[])
 {
  int i = 0 , k , d ;
  int myBin[] = new int[20];
  ArrayList<Integer> myArr = new ArrayList<Integer>();
  Scanner number = new Scanner(System.in);
  System.out.print("Enter a number : ");
  int num = number.nextInt();
  System.out.println("\nGiven number is : " + num);
  d = num;
  while(num > 0)
  {
   myBin[i] = num%2;
   myArr.add(myBin[i]);
   num = num/2;
   i++;
  }
  System.out.print("\nGiven number " + d + " in Binary form : ");
  for(k = i-1;k >= 0; k--)
  {
   System.out.print(myBin[k]);
  }
  System.out.print("\n\nEnter the bit which we want to check : ");
  int n = number.nextInt();
  int z = myArr.get(n - 1);
  if(z == 1)
   System.out.println("\nIn given number " + d + " the " + n + "-bit is SET");
  else
   System.out.println("\nIn given number " + d + " the " + n + "-bit is NOT SET");
 }
}

