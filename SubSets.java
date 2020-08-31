//To print all possible Subsets of a set

import java.lang.*;
import java.io.*;
import java.util.*;

class SubSets
{
 public static void main(String args[])
 {
  int n = 3,i,j,k,l,x = 0, y;           
  Scanner num = new Scanner(System.in);
  double ns = Math.pow( 2 , n );
  String[] mySet = new String[20];
  System.out.print("Enter 3 elements of the set :");
  for(i = 0;i < n;i++)
  {
   String ele = num.nextLine();
   mySet[i] = ele;
  } 
  System.out.print("\nThe Set is : ");
  for(k = 0; k < i; k++)
   System.out.print(mySet[k] + " ");
  int[][] set = new int[40][20];
  for(i = 0; i < 2; i++)
  {
   for(j = 0;j < 2; j++)
   {
    for(k = 0; k < 2; k++)
    {
     y = 0;
     set[x][y] = i;
     y++;
     set[x][y] = j;
     y++;
     set[x][y] = k;
     x++;
    }
   }
  }
  for(i = 0; i < ns; i++)
  {
   System.out.print("\n{");
   for(j = 0; j < n; j++)
   { 
    if(set[i][j] == 1)
    {
     System.out.print(mySet[j] + " ");
    }
   } 
   System.out.print("}\n"); 
  } 
 }
}