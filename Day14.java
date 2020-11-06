/* 
Task :
Complete the Difference class by writing the following:
A class constructor that takes an array of integers as a parameter and saves it to the  instance variable.
A computeDifference method that finds the maximum absolute difference between any  numbers in  and stores it in the  instance variable.
*/

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class Difference {
  	private int[] elements;
  	public int maximumDifference;
    
    Difference(int elements[]) {
        this.elements = elements;
    } 
    
   public void computeDifference(){
       maximumDifference =0;
       for(int i=0;i<elements.length;i++) {
           for(int j= i+1;j<elements.length;j++) {
               if(Math.abs(elements[i]-elements[j])>maximumDifference) {
                   maximumDifference = Math.abs(elements[i]-elements[j]);
                   }
           }
       }
   }
    
} // End of Difference class

public class Day14 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        sc.close();

        Difference difference = new Difference(a);

        difference.computeDifference();

        System.out.print(difference.maximumDifference);
    }
}
