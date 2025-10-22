import java.util.Scanner;

public class Temperature {
    public static void main(String[] args) {
        Scanner celcius = new Scanner(System.in);
        System.out.print("Please enter the temperature in celcius: ");

        float tempC = celcius.nextFloat();

        float tempF = (tempC * 9/5) + 32;

        System.out.print("Temperature in F : " + tempF);
    }
}