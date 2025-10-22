import java.util.*;
import java.lang.Math;

public class AreaOfParallelogram {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the base of the parallelogram: ");
        double base = input.nextDouble();

        System.out.print("Enter the height of the parallelogram: ");
        double height = input.nextDouble();

        double area = base * height;
        System.out.print("The area of the parallelogram : " + area);
    }
}
