import java.util.*;
import java.lang.Math;

public class AreaOfCircle {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter the radius of the circle : ");
        int radius = scan.nextInt();

        double area = Math.PI * radius * radius;

        System.out.print("The area of the circle with radius " + radius + " is : " + area);
    }
}
