
import java.io.*;
import java.util.*;
public class solution {
    public static void main(String args[]){
        Scanner scan=new Scanner(System.in);
        int n=scan.nextInt();
        dec_to_binary(n); //function to convert decimal to binary
    }

    public static void dec_to_binary(int n) {
        String a[] = new String[n + 1];
        int b[] = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            a[i] = Integer.toBinaryString(i); //Converting the input to array of binary strings and later convert into integers
            //System.out.println(a[i]);
        }
        for (int j = 1; j <= n; j++) {
            b[j] = Integer.parseInt(a[j]); //typecasting-converting strings to integers
            //System.out.println(b[j]);
        }
        int sum = 0;
        for (int i = 1; i <= n; i++)
            sum = sum +b[i];
        System.out.println(sum);
    }
}
