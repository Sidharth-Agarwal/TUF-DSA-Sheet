import java.util.*;

public class InputsSum {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Keep entering values except -1 to stop the program -");
        
        int sum = 0;
        int num = scan.nextInt();

        while(num != -1) {
            sum = sum + num;
            num = scan.nextInt();
        }

        System.out.println("The total for all the values is : " + (sum));
    }    
}
