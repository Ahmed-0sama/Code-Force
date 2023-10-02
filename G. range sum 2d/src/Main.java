import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) {
        FastScanner sc = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);

        int n = sc.nextInt();
        int m = sc.nextInt();
        int attemp = sc.nextInt();
        long[][] arr = new long[n + 1][m + 1];

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                arr[i][j] = sc.nextInt();
            }
        }


        computePrefixSum(arr);

        for (int o = 0; o < attemp; o++) {
            int i = sc.nextInt();
            int j = sc.nextInt();
            int k = sc.nextInt();
            int l = sc.nextInt();


            long res = acc(arr, i, j, k, l);
            System.out.println(res);
        }
    }


    static void computePrefixSum(long[][] array) {
        int n = array.length;
        int m = array[0].length;

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                array[i][j] += array[i - 1][j] + array[i][j - 1] - array[i - 1][j - 1];
            }
        }
    }

    static long acc(long[][] array, int i, int j, int x, int y) {
        return array[x][y] - array[i - 1][y] - array[x][j - 1] + array[i - 1][j - 1];
    }

}
     class FastScanner {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer("");

        String next() {
            while (!st.hasMoreTokens())
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            return st.nextToken();
        }


        int nextInt() {
            return Integer.parseInt(next());
        }
    }




