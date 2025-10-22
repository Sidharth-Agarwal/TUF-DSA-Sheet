import java.util.*;
import java.lang.Math;

public class AreaOfRhombus {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter diagonal 1 of the rhombus : ");
        double diagonalOne = input.nextDouble();

        System.out.print("Enter diagonal 2 of the rhombus : ");
        double diagonalTwo = input.nextDouble();

        double area = (diagonalOne + diagonalTwo) / 2;
        System.out.print("The area of the rhombus is : " + area);
    }
}