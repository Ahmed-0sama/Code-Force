import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        scanner.nextLine();

        while (t-- > 0) {
            char[][] grid = new char[10][10];

            for (int i = 0; i < 10; i++) {
                String row = scanner.nextLine();
                grid[i] = row.toCharArray();
            }

            int totalScore = calculateScore(grid);
            System.out.println(totalScore);
        }
    }

    static int calculateScore(char[][] grid) {
        int[] ringPoints = {1, 2, 3, 4, 5};
        int totalScore = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                    int distanceToCenter = Math.min(i, Math.min(j, Math.min(9 - i, 9 - j)));
                    totalScore += ringPoints[distanceToCenter];
                }
            }
        }

        return totalScore;
    }
}
