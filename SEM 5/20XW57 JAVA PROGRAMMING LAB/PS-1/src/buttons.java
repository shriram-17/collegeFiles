import java.util.Scanner;
import java.io.*;
import java.math.*;
import static java.lang.Math.pow;
import static java.lang.Math.sqrt;
public class buttons {
    public static void main(String args[])
    {
        Scanner Scan =new Scanner(System.in);
        int n =Scan.nextInt();
        int diff[];
        diff = new int[n];
        for (int i=0;i<n;i++) {
        int x1=Scan.nextInt();
        int x2=Scan.nextInt();
        diff[i]=x2-x1;
        }
        for (int i=0;i<n;i++)
        {
            System.out.println("The Minimum Buttons Required for "+(i+1)+" input is "+diff[i]);
        }
    }
    }

