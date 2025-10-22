import java.util.*;

public class OddOrEven {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter an integer : ");
        int number = scan.nextInt();
        
        if ((number % 2) == 0) {
            System.out.print("The number entered is even");
        } else {
            System.out.print("The number entered is odd");
        }
    }
}