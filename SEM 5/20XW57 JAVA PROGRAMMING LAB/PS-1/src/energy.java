import java.util.Scanner;
import java.io.*;
import java.math.*;
import static java.lang.Math.pow;

public class energy {
    public static void main(String args[])
    {   double pi =3.1415945;
        double rho=1.2;
        Scanner Scan =new Scanner(System.in);
        System.out.println("Enter the Average Wind Speed :");
        double Avg_wind=Scan.nextDouble();
        System.out.println("Enter the Operating Efficiency :");
        double Effi =Scan.nextDouble();
        System.out.println("Enter the Blade Radius  :");
        double Br =Scan.nextDouble();

        System.out.println("You entered an Average Wind Speed of "+Avg_wind+" m/s.");
        System.out.println("You entered an Operating Effciency of "+Effi+"("+Effi*100+"%)");
        System.out.println("You entered an Blade Radius of "+Br+"metres");
        double Area=pi* Br;
        double Pmax =0.5*rho*Area*pow(Avg_wind,3);
        double power=Pmax/Effi;
        System.out.println("The Maximum Power is "+String.format("%.2f", Pmax)+" W and the Actual Power is"+String.format("%.2f", power) +" W");
    }
}
