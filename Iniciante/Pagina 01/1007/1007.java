import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner sc = new Scanner(System.in);
        int nota1 = sc.nextInt();
        int nota2 = sc.nextInt();
        int nota3 = sc.nextInt();
        int nota4 = sc.nextInt();

        int diferenca = nota1 * nota2 - nota3 * nota4;

        System.out.printf("DIFERENCA = %d\n", diferenca);

        sc.close();

    }

}