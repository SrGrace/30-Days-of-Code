/*  Sourav_Verma  IPG_2013108
    ABV-IIITM , Gwalior   */
    
    
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[][] = new int[6][6];
        int c=0,d=Integer.MIN_VALUE;
        boolean flag=true;
        for(int i=0; i < 6; i++){
            for(int j=0; j < 6; j++){
                arr[i][j] = in.nextInt();
            }
        }
        for(int i=1;i<5; i++){
            for(int j=1;j<5;j++){
                c=arr[i][j]+arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
                if(d<=c){
                    d=c;
                }
            }
        }
        System.out.println(d);
    }
}

