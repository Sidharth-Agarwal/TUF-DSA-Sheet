import java.util.Scanner;

public class SimpleInterest {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter the principal amount : ");
        int principal = scan.nextInt();
        System.out.println("Enter the interest percentage : ");
        int interest = scan.nextInt();
        System.out.println("Enter the time duration : ");
        int time = scan.nextInt();

        float simpleInterest = (principal * interest * time) / 100;
        System.out.println("The simple interest of the values is : " + simpleInterest);
    }    
}
