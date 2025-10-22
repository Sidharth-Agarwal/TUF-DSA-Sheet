import java.util.*;
import java.lang.Math;

public class AreaOfTriangle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the first side of the triangle : ");
        double sideOne = input.nextDouble();
        
        System.out.print("Enter the second side of the triangle : ");
        double sideTwo = input.nextDouble();

        System.out.print("Enter the third side of the triangle : ");
        double sideThree = input.nextDouble();

        double perimeter = (sideOne + sideTwo + sideThree) / 2;

        double area = Math.sqrt(perimeter * (perimeter - sideOne) * (perimeter - sideTwo) * (perimeter - sideThree));

        System.out.print("Area of the triangle: " + area);
    }
}
