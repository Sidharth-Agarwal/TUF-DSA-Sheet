import java.util.*;

public class Reverse {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int number = scan.nextInt();

        int rev = 0;

        while(number != 0) {
            int temp = number % 10;
            rev = (rev*10) + temp;
            number /= 10;
        }

        System.out.println("The reverse of the number is : " + rev);
    }
}