import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Введите число: ");
        double osnovanie = scanner.nextDouble();
        System.out.print("Введите степень: ");
        double stepen1 = scanner.nextDouble();
        System.out.print("Введите новую степень: ");
        double stepen2 = scanner.nextDouble();

        System.out.printf("Новая степень: %.2f%n", stepen2);
    }
}
