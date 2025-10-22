import java.util.*;
import java.lang.Math;

public class PerimeterOfParallelogram {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the length of the parallelogram : ");
        double length = input.nextDouble();

        System.out.print("Enter the breadth of the parallelogram : ");
        double breadth = input.nextDouble();

        double perimeter = 2 * (length + breadth);
        System.out.print("The perimeter of the parallelogram is : " + perimeter);
    }
}