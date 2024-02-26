import java.util.Scanner;

public class _1512A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt();
            int[] arr = new int[n];

            for (int i = 0; i < n; i++) {
                arr[i] = scanner.nextInt();
            }

            for (int i = 0; i < n; i++) {
                if (i == 0 && arr[i] != arr[i + 1] && arr[i] != arr[i + 2]) {
                    System.out.println(i + 1);
                    break;
                }
                if (i == 0 && arr[i] != arr[i + 1] && arr[i] == arr[i + 2]) {
                    continue;
                }
                if (i == n - 1) {
                    System.out.println(i + 1);
                    break;
                }
                if (arr[i] != arr[i + 1] && arr[i] != arr[i - 1]) {
                    System.out.println(i + 1);
                    break;
                }
            }
        }

        scanner.close();
    }
}
