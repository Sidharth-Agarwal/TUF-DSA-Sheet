import java.util.*;

public class LargerNumber {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter the first number : ");
        int firstNumber = scan.nextInt();
        System.out.println("Enter the second number : ");
        int secondNumber = scan.nextInt();

        if(firstNumber > secondNumber) {
            System.out.println(firstNumber + " is larger");
        } else {
            System.out.println(secondNumber + " is larger");
        }
    }    
}