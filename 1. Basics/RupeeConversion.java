import java.util.*;

public class RupeeConversion {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter the amount in rupee");
        float rupee = scan.nextFloat();

        double usd = rupee * 0.011;

        System.out.println("The converted amount in usd is : " + usd);
    }    
}
