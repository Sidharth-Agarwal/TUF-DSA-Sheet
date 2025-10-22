import java.util.*;

public class Armstrong {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        int number = scan.nextInt();

        int temp = number;

        int armstrong = 0;

        while(temp != 0) {
            int temp1 = temp % 10;
            armstrong = armstrong + (temp1*temp1*temp1);
            temp = temp/10;
        }

        if(number == armstrong) {
            System.out.print("The number entered is an armstrong number");
        } else {
            System.out.print("The number entered is not an armstrong number");
        }
    }
}
