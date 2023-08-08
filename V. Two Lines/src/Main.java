import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x1 = sc.nextInt();
        int y1 = sc.nextInt();
        int x2 = sc.nextInt();
        int y2 = sc.nextInt();
        int x3 = sc.nextInt();
        int y3 = sc.nextInt();
        int x4 = sc.nextInt();
        int y4 = sc.nextInt();

        // Calculate the slopes of the lines
        int dx1 = x2 - x1;
        int dy1 = y2 - y1;
        int dx2 = x4 - x3;
        int dy2 = y4 - y3;

        // Check if the lines are parallel
        if (dy1 * dx2 == dy2 * dx1) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}