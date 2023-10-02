import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) {
        FastScanner in = new FastScanner();
        PrintWriter out = new PrintWriter(System.out);

        int n = in.nextInt(), q = in.nextInt();
        long[] v = new long[n + 1];
        long[] ps = new long[200005];

        v[0] = 0;
        for (int i = 1; i <= n; i++) {
            v[i] = in.nextInt();
        }

        ps[0] = 0;
        while (q-- > 0) {
            int l = in.nextInt(), r = in.nextInt(), val = in.nextInt();
            ps[l] += val;
            ps[r + 1] -= val;
        }

        for (int i = 1; i < 200005; i++) {
            ps[i] += ps[i - 1];
        }

        for (int i = 1; i <= n; i++) {
            v[i] += ps[i];
            out.print(v[i] + " ");
        }

        out.close();
    }


    static class FastScanner {
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
}