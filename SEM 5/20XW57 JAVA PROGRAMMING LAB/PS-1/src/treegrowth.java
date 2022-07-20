import java.util.Scanner;
import java.io.*;
import java.math.*;
import static java.lang.Math.pow;
import static java.lang.Math.sqrt;

public class treegrowth {
    public static void main(String args[])
    {
        Scanner Scan =new Scanner(System.in);
        System.out.println("Enter the Amount of Mass:");
        double treeMass=Scan.nextDouble();
        System.out.println("Enter the age in Years:");
        int  age =Scan.nextInt();
        System.out.println("You entered a mass of "+ treeMass+" and an age of "+age+" years.");
        for (int i=age;i<90;i++) {
            double height = pow(treeMass * i, 0.25);
            System.out.println("At age"+i+"years, the approximate height of the tree is "+ String.format("%.2f",height)+" meters.");
        }
    }
}
