import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Day20 {

    public static void main(String[] args) {
        int count = 0;
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] arr = new int[n];
        
        for(int i = 0; i < n; i++) {
            arr[i] = scan.nextInt();
        }
        
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++){
                if(arr[i] > arr[j]){
                    count++ ;
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
            }
            }
        }
            System.out.println("Array is sorted in "+count+" swaps.");
            System.out.println("First Element: "+arr[0]);
            System.out.println("Last Element: "+arr[n-1]);
    }
}
