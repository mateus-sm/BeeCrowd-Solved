import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        double nota1 = sc.nextDouble();
        double nota2 = sc.nextDouble();
        double nota3 = sc.nextDouble();

        double media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

        System.out.printf("MEDIA = %.1f\n", media);

        sc.close();

    }

}