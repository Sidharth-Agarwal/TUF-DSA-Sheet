import java.util.*;

public class CountingOccurences {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter the number : ");
        int number = scan.nextInt();

        System.out.print("Enter the number whose occurence you want to find : ");
        int find = scan.nextInt();

        int occurence = 0;

        while(number != 0) {
            int temp = number % 10;
            
            if(temp == find) {
                occurence++;
                number /= 10;
            } else {
                number /= 10;
            }
        }

        System.out.print("The occurences of the entered number is : " + occurence);
    }
}
