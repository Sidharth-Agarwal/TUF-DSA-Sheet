import java.util.*;

public class Multiplication {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter the number whose table you want to print : ");
        int number = scan.nextInt();

        for(int i = 1; i <= 10; i++) {
            System.out.println(number + " x " + i + " = " + (number*i));
        }
    }    
}