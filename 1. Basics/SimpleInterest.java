import java.util.Scanner;

public class SimpleInterest {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter the principal amount : ");
        int principal = scan.nextInt();
        System.out.print("Enter the interest percentage : ");
        int interest = scan.nextInt();
        System.out.print("Enter the time duration : ");
        int time = scan.nextInt();

        float simpleInterest = (principal * interest * time) / 100;
        System.out.print("The simple interest of the values is : " + simpleInterest);
    }    
}
