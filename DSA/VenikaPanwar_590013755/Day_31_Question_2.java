import java.util.*;

public class Day_31_Question_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int n = sc.nextInt();

        int result = n << 1;  // left shift by 1 = multiply by 2

        System.out.println("Result: " + result);
    }
}
