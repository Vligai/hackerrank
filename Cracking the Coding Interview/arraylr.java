import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
/*https://www.hackerrank.com/challenges/ctci-array-left-rotation*/
public class Solution {

    public static int[] arrayLeftRotation(int a[], int n, int k)
    {
        int temp = a[0];
        int j = 0;
        while(j < k){
            helper(a, n);
            /*
            for (i = 0; i < k-1; i++)
                a[i] = a[i+1];
            a[i] = temp;
            */
            j++;
        }
        return a;
    }
    public static void helper(int a[], int n)
        {
        int temp = a[0];
        int i;
        for (i = 0; i < n-1; i++)
                a[i] = a[i+1];
        a[i] = temp;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int a[] = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
      
        int[] output = new int[n];
        output = arrayLeftRotation(a, n, k);
        for(int i = 0; i < n; i++)
            System.out.print(output[i] + " ");
      
        System.out.println();
      
    }
}