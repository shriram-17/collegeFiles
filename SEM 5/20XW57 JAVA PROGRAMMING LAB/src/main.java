import java.lang.*;
import java.util.Scanner;
public class main {
    public static void main(String args[])
    {
        System.out.println("Hello World");
        Scanner myObj = new Scanner(System.in);  // Create a Scanner object
        System.out.println("Enter name, age and salary:");

        String userName = myObj.nextLine();  // Read user input
        System.out.println("Username is: " + userName);

        int Age = myObj.nextInt();  // Read user input
        System.out.println("Salary is: " + Age);
        int Salary= myObj.nextInt();  // Read user input
        System.out.println("Salary is: " + Salary);

    }
}