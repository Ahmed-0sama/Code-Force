import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) {

        FastScanner sc = new FastScanner(System.in);
        int n = sc.nextInt();
        long[] v = new long[n];
        for (int i = 0; i < n; i++) {
            v[i] = sc.nextLong();
        }

        long[] sortedV = Arrays.copyOf(v, n);
        Arrays.sort(sortedV);

        long[] prefixSum = new long[n];
        long[] sortedPrefixSum = new long[n];

        
        for (int i = 0; i < n; i++) {
            prefixSum[i] = (i > 0 ? prefixSum[i - 1] : 0) + v[i];
            sortedPrefixSum[i] = (i > 0 ? sortedPrefixSum[i - 1] : 0) + sortedV[i];
        }

        int m = sc.nextInt();
        for (int i = 0; i < m; i++) {
            int type = sc.nextInt();
            int l = sc.nextInt() - 1;
            int r = sc.nextInt() - 1;

            if (type == 1) {
                long answer = prefixSum[r] - (l > 0 ? prefixSum[l - 1] : 0);
                System.out.println(answer);
            } else {
                long answer = sortedPrefixSum[r] - (l > 0 ? sortedPrefixSum[l - 1] : 0);
                System.out.println(answer);
            }
        }
    }
}

class FastScanner {
    private BufferedReader br;
    private StringTokenizer st;

    public FastScanner(InputStream inputStream) {
        br = new BufferedReader(new InputStreamReader(inputStream));
    }

    public String next() {
        while (st == null || !st.hasMoreTokens()) {
            try {
                st = new StringTokenizer(br.readLine());
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        return st.nextToken();
    }

    public int nextInt() {
        return Integer.parseInt(next());
    }

    public long nextLong() {
        return Long.parseLong(next());
    }

    public double nextDouble() {
        return Double.parseDouble(next());
    }

    public String nextLine() {
        String str = "";
        try {
            str = br.readLine();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return str;
    }
}