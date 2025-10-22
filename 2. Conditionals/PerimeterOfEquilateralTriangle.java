import java.util.*;
import java.lang.Math;

public class PerimeterOfEquilateralTriangle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the side of the equilateral triangle : ");
        double side = input.nextDouble();

        double perimeter = 3 * side;
        System.out.print("The perimeter of the equilateral triangle is : " + perimeter);
    }
}
