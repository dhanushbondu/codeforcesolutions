import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        long t = scanner.nextLong();
        while (t-- > 0) {
            String s = scanner.next();
            if (s.length() % 2 != 0) {
                System.out.println("NO");
                continue;
            }

            long h = s.length() / 2;

            boolean sq = true;
            for (long p = 0; p < h; p++) {
                if (s.charAt((int) p) != s.charAt((int) (h + p))) {
                    sq = false;
                    break;
                }
            }

            System.out.println(sq ? "YES" : "NO");
        }
    }
}
