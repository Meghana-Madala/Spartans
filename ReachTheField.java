//Reach the field problem

import java.io.*;
import java.lang.*;
import java.util.*;

class ReachTheField
{
 public static void main(String args[])
 {
  int n, i = 0, myBag = 0, home = 0, count = 0;
  int[] fruits = {1, 2, 3, 1, 2, 4, 5, 3, 2};
  n = fruits.length;
  while(i < n)
  {
   myBag = myBag + fruits[i];   
   if(myBag > 5)
   {
    count++;
    myBag = 0;
    continue;
   }
   if(myBag == 5)
   {
    count++;
    if(i == n-1 && myBag == 5)
      break;
    i++;
    myBag = 0;
    continue;
   }
   if(i == n-1 && myBag < 5)
   {
    count++;
    break;
   }
   i++;
  }
  System.out.println("Total number of rounds = " + count); 
 }
}  