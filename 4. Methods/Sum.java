import java.util.*;

public class Sum {

    static void sum() {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the first number : ");
        int num1 = input.nextInt();

        System.out.print("Enter the second number : ");
        int num2 = input.nextInt();

        int sum = num1 + num2;
        System.out.print("The number of the two numbers is : " + sum);
    }
    
    public static void main(String args[]) {
        sum();
    }
}