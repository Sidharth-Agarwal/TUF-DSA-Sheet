import java.util.*;
import java.lang.Math;

public class AreaOfEquilateralTriangle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the side of the equilateral triangle : ");
        double side = input.nextDouble();

        double area = (Math.sqrt(3) / 4) * side * side;

        System.out.print("Area of the equilateral triangle: " + area);
    }
}
