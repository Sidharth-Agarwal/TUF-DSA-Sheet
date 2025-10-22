import java.util.*;
import java.lang.Math;

public class PerimeterOfCircle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the radius of the circle : ");
        double radius = input.nextDouble();

        double perimeter = 2 * Math.PI * radius;

        System.out.print("The perimeter of the circle is : " + perimeter);
    }
}
