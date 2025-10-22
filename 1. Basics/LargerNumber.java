import java.util.*;

public class LargerNumber {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter the first number : ");
        int firstNumber = scan.nextInt();
        System.out.print("Enter the second number : ");
        int secondNumber = scan.nextInt();

        if(firstNumber > secondNumber) {
            System.out.print(firstNumber + " is larger");
        } else {
            System.out.print(secondNumber + " is larger");
        }
    }    
}