import java.util.*;

public class Sum {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter the first number : ");
        int firstNumber = scan.nextInt();

        System.out.print("Enter the second number : ");
        int secondNumber = scan.nextInt();

        System.out.print("The sum of the two numbers is : " + (firstNumber + secondNumber));
    }
}