import java.util.*;

public class HCFLCM {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        int number1 = scan.nextInt();

        System.out.print("Enter the second number: ");
        int number2 = scan.nextInt();

        int hcf;
        int lcm;

        int temp1 = number1;
        int temp2 = number2;

        while(temp2 != 0) {
            int temporary = temp2;
            temp2 = temp2 % temp1;
            temp1 = temporary;
        }

        hcf = temp1;

        lcm = (number1 * number2) / hcf;

        System.out.print("HCF of " + number1 + " and " + number2 + " is: " + hcf);
        System.out.print("LCM of " + number1 + " and " + number2 + " is: " + lcm);
    }    
}
