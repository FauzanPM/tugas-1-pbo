import java.util.Scanner;

class tugas1 {
    public static void main(String args[]) {
        char[] a = {'F', 'A', 'U', 'Z', 'A', 'N'};
        int[][] x = {{1, 2}, {3, 4}, {5, 6}};

        Scanner input = new Scanner(System.in);
        System.out.print("Masukkan Nilai : ");
        int n = input.nextInt();                                // Input
        System.out.println("Nilainya : " + n);                  // Output

        System.out.println("Array 2D");                         // Array 2D/Multidimensi
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                System.out.print(x[i][j] + "\t");
            }
            System.out.println();
        }


        if (n % 2 == 0) {                                       // If Percabangan
            System.out.println(n + " Adalah bilangan Genap");
        } else {
            System.out.println(n + " Adalah bilangan Ganjil");
        }

        System.out.println("Array 1D");

        for (int i = 0; i < 6; i++) {                           // Perulangan For + Array 1D
            System.out.println("Index " + i + " = " + a[i]);
        }
        int f = 0;

        while (f < n) {                                         // While
            System.out.println("While");
            f++;
        }
        int e = 0;

        do {                                                    // Do while
            System.out.println("Do While");
            e++;
        }
        while (e < n);
    }
}