import java.util.Scanner;

public class Greeting {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter first name : ");
        String firstName = scan.next();
        System.out.print("Enter last name : ");
        String lastName = scan.next();

        System.out.print("Hello, " + firstName + " " + lastName + " How are you?");
    }    
}
