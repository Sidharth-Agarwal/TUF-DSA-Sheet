import java.util.*;
import java.lang.Math;

public class AreaOfRectangle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the length of the rectangle : ");
        double length = input.nextDouble();

        System.out.print("Enter the breath of the rectangle : ");
        double breadth = input.nextDouble();

        double area = length * breadth;

        System.out.print("The area of the rectangle is : " + area);
    }
}