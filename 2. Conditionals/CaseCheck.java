import java.util.*;

public class CaseCheck {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        char ch = scan.next().trim().charAt(0);

        if (ch >= 'a' && ch <= 'z') {
            System.out.println("The character is a lowercase");
        } else {
            System.out.println("The character is an uppercase");
        }
    }
}