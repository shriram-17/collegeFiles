import java.util.Scanner;
import java.io.*;
import java.math.*;
import static java.lang.Math.pow;
import static java.lang.Math.sqrt;
public class score {
    public static void main(String args[])
    {

        Scanner scan= new Scanner(System.in);
        int n=scan.nextInt();
        int intialx=scan.nextInt();
        int intialy=scan.nextInt();
        int finalx=scan.nextInt();
        int finaly=scan.nextInt();
        String[] output = new String[n];
        for(int i=0;i<n;i++)
        {
            int x1=scan.nextInt();
            int x2=scan.nextInt();
            if(x1<=finalx && x2<=finaly )
            {
                output[i]="Possible";
            }
            else
            {
                output[i]="Impossible";
            }
        }
        for(int i = 0; i < n; ++i) {
            System.out.println("The "+(i+1)+" input for the output is "+output[i]);
        }

    }

}
