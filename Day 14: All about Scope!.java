/* Sourav_Verma  IPG_2013108
   ABV_IIITM , Gwalior   */
   
   
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class Difference {
  	private int[] elements;
  	public int maximumDifference;
  	
  	// Add your code here

Difference(int[] e){
        elements = e;        
    }
    void computeDifference(){
        Arrays.sort(elements);
        maximumDifference = elements[elements.length-1] - elements[0]; 
    }
    
} // End of Difference Class

public class Solution {        
  	public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
    	int N = sc.nextInt();
    	int[] a = new int[N];
    
    	for (int i = 0; i < N; i++) {
    		a[i] = sc.nextInt();
    	}

      	Difference D = new Difference(a);

        D.computeDifference();

        System.out.print(D.maximumDifference);
   }
}
