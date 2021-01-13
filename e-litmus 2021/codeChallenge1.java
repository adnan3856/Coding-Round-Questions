import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        for (int count = 0; count < n; count++) {
            String s = scan.next();
            char[] sArray = s.toCharArray();
            String s1 = "";
            for (int i = 0; i < sArray.length; i++) {
                if (sArray[i] == 'a' || sArray[i] == 'A' || sArray[i] == 'e' || sArray[i] == 'E' || sArray[i] == 'i' || sArray[i] == 'I' || sArray[i] == 'o' || sArray[i] == 'O' || sArray[i] == 'u' || sArray[i] == 'U') {
                    sArray[i] = '0';
                }
            }
            for (int j = 0; j < sArray.length; j++) {
                if (sArray[j] != '0') {
                    s1 = s1 + sArray[j];
                }
            }
            String s2 = s1.toLowerCase();
            String s3 = "";
            for (int k = 0; k < s2.length(); k++) {
                s3 = s3 + "*" + s2.charAt(k);
            }
            System.out.println(s3);
        }
    }
}
